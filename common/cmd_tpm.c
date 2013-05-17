/*
 * Copyright 2000-2009
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <common.h>
#include <command.h>
#include <tpm.h>
#include <i2c.h>

static int cmd_tpm_init()
{
  printf("Init TPM\n");
  int ret;
  ret = tis_init();
  printf("TPM initialization returned: %d\n", ret);

  return 0;
}

static int cmd_tpm_open()
{
	printf("Open TPM\n");
	int ret;
	ret = tis_open();
	printf("TPM open returned: %d\n", ret);

	return 0;
}

U_BOOT_CMD(
	tpm_init,	CONFIG_SYS_MAXARGS,	0,	cmd_tpm_init,
  "Init the I2C TPM",
  ""
);

U_BOOT_CMD(
	tpm_open, CONFIG_SYS_MAXARGS, 0, cmd_tpm_open,
  "Open I2C TPM",
  ""
);


static int cmd_tpm_close()
{
	printf("Close TPM\n");
	int ret;
	ret = tis_close();
	printf("TPM close returned: %d\n", ret);

	return 0;
}

U_BOOT_CMD(
	tpm_close, CONFIG_SYS_MAXARGS, 0, cmd_tpm_close,
  "Close I2C TPM",
  ""
);

static int cmd_tpm_sendrecv()
{
	printf("Sending something...\n");
	int ret;
	char buf[32];
	ret = tis_sendrecv(0x00000015, 16, buf, sizeof(buf));
	printf("sendrecv returned: %d\n", ret);
	printf("buffer is: %s\n", buf);

	return 0;

}

U_BOOT_CMD(
	tpm_sendrecv, CONFIG_SYS_MAXARGS, 0, cmd_tpm_sendrecv,
  "Send/Receive to/from I2C TPM",
  ""
);
