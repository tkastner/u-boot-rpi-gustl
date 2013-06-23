  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>u-boot-rpi-gustl/drivers/tpm/tpm_tis_i2c.c at master · tkastner/u-boot-rpi-gustl</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="http://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <link rel="assets" href="https://a248.e.akamai.net/assets.github.com/">
    <link rel="xhr-socket" href="/_sockets" />
    


    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="2670172" name="octolytics-actor-id" /><meta content="tkastner" name="octolytics-actor-login" /><meta content="782255725e5198136e5d47c01d071e48248dfce1a5ee7c0041cf4277c2b7189a" name="octolytics-actor-hash" />

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="aKIh3wI3loKLkONU7mIK8rggq4u1m+AEVzu3qwc/oZ8=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-c47c070f917ba43318f4feae9bd4fac4f84ce588.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-a0519b2acdd5676c29a97426cf58fc32d900dcd6.css" media="all" rel="stylesheet" type="text/css" />
    


      <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-4c434fa1705bf526e191eec0cd8fab1a5ce3e326.js" type="text/javascript"></script>
      <script src="https://a248.e.akamai.net/assets.github.com/assets/github-0cb6044a6af41e2df5425a18db5d05989fbe60f3.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="e9f0336a3ca9f86754f819ad338d7e04">

        <link data-pjax-transient rel='permalink' href='/tkastner/u-boot-rpi-gustl/blob/6159bb98a5dcd3936b23f44e33fcca643e82b27a/drivers/tpm/tpm_tis_i2c.c'>
    <meta property="og:title" content="u-boot-rpi-gustl"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/tkastner/u-boot-rpi-gustl"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/370a5ce04d7ad8d28f5c57a6ef26bf21?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="Contribute to u-boot-rpi-gustl development by creating an account on GitHub."/>
    <meta property="twitter:card" content="summary"/>
    <meta property="twitter:site" content="@GitHub">
    <meta property="twitter:title" content="tkastner/u-boot-rpi-gustl"/>

    <meta name="description" content="Contribute to u-boot-rpi-gustl development by creating an account on GitHub." />


    <meta content="2670172" name="octolytics-dimension-user_id" /><meta content="tkastner" name="octolytics-dimension-user_login" /><meta content="10120660" name="octolytics-dimension-repository_id" /><meta content="tkastner/u-boot-rpi-gustl" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="10120660" name="octolytics-dimension-repository_network_root_id" /><meta content="tkastner/u-boot-rpi-gustl" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/tkastner/u-boot-rpi-gustl/commits/master.atom" rel="alternate" title="Recent Commits to u-boot-rpi-gustl:master" type="application/atom+xml" />

  </head>


  <body class="logged_in page-blob linux vis-public env-production  ">
    <div id="wrapper">

      
      
      

      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-octicon octicon-mark-github"></span>
</a>

    <div class="divider-vertical"></div>

      <a href="/notifications" class="notification-indicator tooltipped downwards" title="You have no unread notifications">
    <span class="mail-status all-read"></span>
  </a>
  <div class="divider-vertical"></div>


      <div class="command-bar js-command-bar  in-repository">
          <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">
  <a href="/search/advanced" class="advanced-search-icon tooltipped downwards command-bar-search" id="advanced_search" title="Advanced search"><span class="octicon octicon-gear "></span></a>

  <input type="text" data-hotkey="/ s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    data-username="tkastner"
      data-repo="tkastner/u-boot-rpi-gustl"
      data-branch="master"
      data-sha="b7f95afa980d68948256ed176692691eb2cab8ff"
  >

    <input type="hidden" name="nwo" value="tkastner/u-boot-rpi-gustl" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="octicon help tooltipped downwards" title="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

  <div class="divider-vertical"></div>

</form>
        <ul class="top-nav">
            <li class="explore"><a href="/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="http://help.github.com">Help</a></li>
        </ul>
      </div>

    

  

    <ul id="user-links">
      <li>
        <a href="/tkastner" class="name">
          <img height="20" src="https://secure.gravatar.com/avatar/370a5ce04d7ad8d28f5c57a6ef26bf21?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /> tkastner
        </a>
      </li>

        <li>
          <a href="/new" id="new_repo" class="tooltipped downwards" title="Create a new repo">
            <span class="octicon octicon-repo-create"></span>
          </a>
        </li>

        <li>
          <a href="/settings/profile" id="account_settings"
            class="tooltipped downwards"
            title="Account settings ">
            <span class="octicon octicon-tools"></span>
          </a>
        </li>
        <li>
          <a class="tooltipped downwards" href="/logout" data-method="post" id="logout" title="Sign out">
            <span class="octicon octicon-log-out"></span>
          </a>
        </li>

    </ul>


<div class="js-new-dropdown-contents hidden">
  

<ul class="dropdown-menu">
  <li>
    <a href="/new"><span class="octicon octicon-repo-create"></span> New repository</a>
  </li>
  <li>
    <a href="/organizations/new"><span class="octicon octicon-list-unordered"></span> New organization</a>
  </li>



    <li class="section-title">
      This Repository
    </li>
    <li>
      <a href="/tkastner/u-boot-rpi-gustl/issues/new"><span class="octicon octicon-issue-opened"></span> New issue</a>
    </li>
      <li>
        <a href="/tkastner/u-boot-rpi-gustl/settings/collaboration"><span class="octicon octicon-person-add"></span> New collaborator</a>
      </li>
</ul>

</div>


    
  </div>
</div>

      

      


            <div class="global-notices">
      <div class="flash-global">
        <div class="container">
          <a href="/users/tkastner/enable_repository_next?nwo=tkastner%2Fu-boot-rpi-gustl" class="button minibutton flash-action blue" data-method="post">Enable Repository Next</a>

          <h2>Hey there, would you like to enable our new repository design?</h2>
          <p>We&rsquo;ve been working hard making a <a href="https://github.com/blog/1529-repository-next">faster, better repository experience</a> and we&rsquo;d love to share it with you.</p>
        </div>
      </div>
    </div>
    <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu ">
          <div class="container">
            <div class="title-actions-bar">
              

<ul class="pagehead-actions">

    <li class="nspr">
      <a href="/tkastner/u-boot-rpi-gustl/pull/new/master" class="button minibutton btn-pull-request" icon_class="octicon-git-pull-request"><span class="octicon octicon-git-pull-request"></span>Pull Request</a>
    </li>

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="aKIh3wI3loKLkONU7mIK8rggq4u1m+AEVzu3qwc/oZ8=" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="10120660" />

    <div class="select-menu js-menu-container js-select-menu">
      <span class="minibutton select-menu-button  js-menu-target">
        <span class="js-select-button">
          <span class="octicon octicon-eye-unwatch"></span>
          Unwatch
        </span>
      </span>

      <div class="select-menu-modal-holder">
        <div class="select-menu-modal subscription-menu-modal js-menu-content">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container">

            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for discussions in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-watch"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

    <li class="js-toggler-container js-social-container starring-container ">
      <a href="/tkastner/u-boot-rpi-gustl/unstar" class="minibutton with-count js-toggler-target star-button starred upwards" title="Unstar this repo" data-remote="true" data-method="post" rel="nofollow">
        <span class="octicon octicon-star-delete"></span>
        <span class="text">Unstar</span>
      </a>
      <a href="/tkastner/u-boot-rpi-gustl/star" class="minibutton with-count js-toggler-target star-button unstarred upwards" title="Star this repo" data-remote="true" data-method="post" rel="nofollow">
        <span class="octicon octicon-star"></span>
        <span class="text">Star</span>
      </a>
      <a class="social-count js-social-count" href="/tkastner/u-boot-rpi-gustl/stargazers">0</a>
    </li>

        <li>
          <a href="/tkastner/u-boot-rpi-gustl/fork" class="minibutton with-count js-toggler-target fork-button lighter upwards" title="Fork this repo" rel="facebox nofollow">
            <span class="octicon octicon-git-branch-create"></span>
            <span class="text">Fork</span>
          </a>
          <a href="/tkastner/u-boot-rpi-gustl/network" class="social-count">0</a>
        </li>


</ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-octicon octicon-repo"></span>
                <span class="author vcard">
                  <a href="/tkastner" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">tkastner</span>
                  </a></span> /
                <strong><a href="/tkastner/u-boot-rpi-gustl" class="js-current-repository">u-boot-rpi-gustl</a></strong>
              </h1>
            </div>

            
  <ul class="tabs">
    <li class="pulse-nav"><a href="/tkastner/u-boot-rpi-gustl/pulse" class="js-selected-navigation-item " data-selected-links="pulse /tkastner/u-boot-rpi-gustl/pulse" rel="nofollow"><span class="octicon octicon-pulse"></span></a></li>
    <li><a href="/tkastner/u-boot-rpi-gustl" class="js-selected-navigation-item selected" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /tkastner/u-boot-rpi-gustl">Code</a></li>
    <li><a href="/tkastner/u-boot-rpi-gustl/network" class="js-selected-navigation-item " data-selected-links="repo_network /tkastner/u-boot-rpi-gustl/network">Network</a></li>
    <li><a href="/tkastner/u-boot-rpi-gustl/pulls" class="js-selected-navigation-item " data-selected-links="repo_pulls /tkastner/u-boot-rpi-gustl/pulls">Pull Requests <span class='counter'>0</span></a></li>

      <li><a href="/tkastner/u-boot-rpi-gustl/issues" class="js-selected-navigation-item " data-selected-links="repo_issues /tkastner/u-boot-rpi-gustl/issues">Issues <span class='counter'>0</span></a></li>

      <li><a href="/tkastner/u-boot-rpi-gustl/wiki" class="js-selected-navigation-item " data-selected-links="repo_wiki /tkastner/u-boot-rpi-gustl/wiki">Wiki</a></li>


    <li><a href="/tkastner/u-boot-rpi-gustl/graphs" class="js-selected-navigation-item " data-selected-links="repo_graphs repo_contributors /tkastner/u-boot-rpi-gustl/graphs">Graphs</a></li>

      <li>
        <a href="/tkastner/u-boot-rpi-gustl/settings">Settings</a>
      </li>

  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/tkastner/u-boot-rpi-gustl/tags" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_tags /tkastner/u-boot-rpi-gustl/tags">Tags <span class="counter blank">0</span></a></li>
    </ul>
  </span>

  <div class="tabnav-widget scope">


    <div class="select-menu js-menu-container js-select-menu js-branch-menu">
      <a class="minibutton select-menu-button js-menu-target" data-hotkey="w" data-ref="master">
        <span class="octicon octicon-git-branch"></span>
        <i>branch:</i>
        <span class="js-select-button">master</span>
      </a>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">

        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Switch branches/tags</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-filters">
            <div class="select-menu-text-filter">
              <input type="text" id="commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
            </div>
            <div class="select-menu-tabs">
              <ul>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
                </li>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
                </li>
              </ul>
            </div><!-- /.select-menu-tabs -->
          </div><!-- /.select-menu-filters -->

          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="branches">

            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item selected">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/tkastner/u-boot-rpi-gustl/blob/master/drivers/tpm/tpm_tis_i2c.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="master" rel="nofollow" title="master">master</a>
                </div> <!-- /.select-menu-item -->
            </div>

              <form accept-charset="UTF-8" action="/tkastner/u-boot-rpi-gustl/branches" class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="aKIh3wI3loKLkONU7mIK8rggq4u1m+AEVzu3qwc/oZ8=" /></div>

                <span class="octicon octicon-git-branch-create select-menu-item-icon"></span>
                <div class="select-menu-item-text">
                  <h4>Create branch: <span class="js-new-item-name"></span></h4>
                  <span class="description">from ‘master’</span>
                </div>
                <input type="hidden" name="name" id="name" class="js-new-item-value">
                <input type="hidden" name="branch" id="branch" value="master" />
                <input type="hidden" name="path" id="branch" value="drivers/tpm/tpm_tis_i2c.c" />
              </form> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="tags">
            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

            </div>

            <div class="select-menu-no-results">Nothing to show</div>

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/tkastner/u-boot-rpi-gustl" class="selected js-selected-navigation-item tabnav-tab" data-selected-links="repo_source /tkastner/u-boot-rpi-gustl">Files</a></li>
    <li><a href="/tkastner/u-boot-rpi-gustl/commits/master" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_commits /tkastner/u-boot-rpi-gustl/commits/master">Commits</a></li>
    <li><a href="/tkastner/u-boot-rpi-gustl/branches" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_branches /tkastner/u-boot-rpi-gustl/branches" rel="nofollow">Branches <span class="counter ">1</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:fa68ea843265f4ae4f9bbecc52f33344 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:fa68ea843265f4ae4f9bbecc52f33344 -->

<div id="slider">
    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

        <a href="/tkastner/u-boot-rpi-gustl/find/master" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>

        <div class="breadcrumb">
          <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/tkastner/u-boot-rpi-gustl" class="js-slide-to" data-branch="master" data-direction="back" itemscope="url"><span itemprop="title">u-boot-rpi-gustl</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/tkastner/u-boot-rpi-gustl/tree/master/drivers" class="js-slide-to" data-branch="master" data-direction="back" itemscope="url"><span itemprop="title">drivers</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/tkastner/u-boot-rpi-gustl/tree/master/drivers/tpm" class="js-slide-to" data-branch="master" data-direction="back" itemscope="url"><span itemprop="title">tpm</span></a></span><span class="separator"> / </span><strong class="final-path">tpm_tis_i2c.c</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="drivers/tpm/tpm_tis_i2c.c" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
        </div>


        
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/370a5ce04d7ad8d28f5c57a6ef26bf21?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/tkastner" rel="author">tkastner</a></span>
    <time class="js-relative-date" datetime="2013-05-17T03:12:01-07:00" title="2013-05-17 03:12:01">May 17, 2013</time>
    <div class="commit-title">
        <a href="/tkastner/u-boot-rpi-gustl/commit/6159bb98a5dcd3936b23f44e33fcca643e82b27a" class="message">initial import</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li class="facebox-user-list-item">
          <img height="24" src="https://secure.gravatar.com/avatar/370a5ce04d7ad8d28f5c57a6ef26bf21?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/tkastner">tkastner</a>
        </li>
      </ul>
    </div>
  </div>


    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/tkastner/u-boot-rpi-gustl/blob/6159bb98a5dcd3936b23f44e33fcca643e82b27a/drivers/tpm/tpm_tis_i2c.c" data-title="u-boot-rpi-gustl/drivers/tpm/tpm_tis_i2c.c at master · tkastner/u-boot-rpi-gustl · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="octicon octicon-file-text"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>592 lines (498 sloc)</span>
                <span>14.297 kb</span>
              </div>
              <div class="actions">
                <div class="button-group">
                        <a class="minibutton"
                           href="/tkastner/u-boot-rpi-gustl/edit/master/drivers/tpm/tpm_tis_i2c.c"
                           data-method="post" rel="nofollow" data-hotkey="e">Edit</a>
                  <a href="/tkastner/u-boot-rpi-gustl/raw/master/drivers/tpm/tpm_tis_i2c.c" class="button minibutton " id="raw-url">Raw</a>
                    <a href="/tkastner/u-boot-rpi-gustl/blame/master/drivers/tpm/tpm_tis_i2c.c" class="button minibutton ">Blame</a>
                  <a href="/tkastner/u-boot-rpi-gustl/commits/master/drivers/tpm/tpm_tis_i2c.c" class="button minibutton " rel="nofollow">History</a>
                </div><!-- /.button-group -->
              </div><!-- /.actions -->

            </div>
                <div class="blob-wrapper data type-c js-blob-data">
      <table class="file-code file-diff">
        <tr class="file-code-line">
          <td class="blob-line-nums">
            <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>
<span id="L567" rel="#L567">567</span>
<span id="L568" rel="#L568">568</span>
<span id="L569" rel="#L569">569</span>
<span id="L570" rel="#L570">570</span>
<span id="L571" rel="#L571">571</span>
<span id="L572" rel="#L572">572</span>
<span id="L573" rel="#L573">573</span>
<span id="L574" rel="#L574">574</span>
<span id="L575" rel="#L575">575</span>
<span id="L576" rel="#L576">576</span>
<span id="L577" rel="#L577">577</span>
<span id="L578" rel="#L578">578</span>
<span id="L579" rel="#L579">579</span>
<span id="L580" rel="#L580">580</span>
<span id="L581" rel="#L581">581</span>
<span id="L582" rel="#L582">582</span>
<span id="L583" rel="#L583">583</span>
<span id="L584" rel="#L584">584</span>
<span id="L585" rel="#L585">585</span>
<span id="L586" rel="#L586">586</span>
<span id="L587" rel="#L587">587</span>
<span id="L588" rel="#L588">588</span>
<span id="L589" rel="#L589">589</span>
<span id="L590" rel="#L590">590</span>
<span id="L591" rel="#L591">591</span>

          </td>
          <td class="blob-line-code">
                  <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * Copyright (C) 2011 Infineon Technologies</span></div><div class='line' id='LC3'><span class="cm"> *</span></div><div class='line' id='LC4'><span class="cm"> * Authors:</span></div><div class='line' id='LC5'><span class="cm"> * Peter Huewe &lt;huewe.external at infineon.com&gt;</span></div><div class='line' id='LC6'><span class="cm"> *</span></div><div class='line' id='LC7'><span class="cm"> * Description:</span></div><div class='line' id='LC8'><span class="cm"> * Device driver for TCG/TCPA TPM (trusted platform module).</span></div><div class='line' id='LC9'><span class="cm"> * Specifications at www.trustedcomputinggroup.org</span></div><div class='line' id='LC10'><span class="cm"> *</span></div><div class='line' id='LC11'><span class="cm"> * This device driver implements the TPM interface as defined in</span></div><div class='line' id='LC12'><span class="cm"> * the TCG TPM Interface Spec version 1.2, revision 1.0 and the</span></div><div class='line' id='LC13'><span class="cm"> * Infineon I2C Protocol Stack Specification v0.20.</span></div><div class='line' id='LC14'><span class="cm"> *</span></div><div class='line' id='LC15'><span class="cm"> * It is based on the Linux kernel driver tpm.c from Leendert van</span></div><div class='line' id='LC16'><span class="cm"> * Dorn, Dave Safford, Reiner Sailer, and Kyleen Hall.</span></div><div class='line' id='LC17'><span class="cm"> *</span></div><div class='line' id='LC18'><span class="cm"> * Version: 2.1.1</span></div><div class='line' id='LC19'><span class="cm"> *</span></div><div class='line' id='LC20'><span class="cm"> * See file CREDITS for list of people who contributed to this</span></div><div class='line' id='LC21'><span class="cm"> * project.</span></div><div class='line' id='LC22'><span class="cm"> *</span></div><div class='line' id='LC23'><span class="cm"> * This program is free software; you can redistribute it and/or</span></div><div class='line' id='LC24'><span class="cm"> * modify it under the terms of the GNU General Public License as</span></div><div class='line' id='LC25'><span class="cm"> * published by the Free Software Foundation, version 2 of the</span></div><div class='line' id='LC26'><span class="cm"> * License.</span></div><div class='line' id='LC27'><span class="cm"> *</span></div><div class='line' id='LC28'><span class="cm"> * This program is distributed in the hope that it will be useful,</span></div><div class='line' id='LC29'><span class="cm"> * but WITHOUT ANY WARRANTY; without even the implied warranty of</span></div><div class='line' id='LC30'><span class="cm"> * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></div><div class='line' id='LC31'><span class="cm"> * GNU General Public License for more details.</span></div><div class='line' id='LC32'><span class="cm"> *</span></div><div class='line' id='LC33'><span class="cm"> * You should have received a copy of the GNU General Public License</span></div><div class='line' id='LC34'><span class="cm"> * along with this program; if not, write to the Free Software</span></div><div class='line' id='LC35'><span class="cm"> * Foundation, Inc., 59 Temple Place, Suite 330, Boston,</span></div><div class='line' id='LC36'><span class="cm"> * MA 02111-1307 USA</span></div><div class='line' id='LC37'><span class="cm"> */</span></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'><span class="cp">#include &lt;common.h&gt;</span></div><div class='line' id='LC40'><span class="cp">#include &lt;compiler.h&gt;</span></div><div class='line' id='LC41'><span class="cp">#include &lt;i2c.h&gt;</span></div><div class='line' id='LC42'><span class="cp">#include &lt;tpm.h&gt;</span></div><div class='line' id='LC43'><span class="cp">#include &lt;asm-generic/errno.h&gt;</span></div><div class='line' id='LC44'><span class="cp">#include &lt;linux/types.h&gt;</span></div><div class='line' id='LC45'><span class="cp">#include &lt;linux/unaligned/be_byteshift.h&gt;</span></div><div class='line' id='LC46'><br/></div><div class='line' id='LC47'><span class="cp">#include &quot;tpm_private.h&quot;</span></div><div class='line' id='LC48'><br/></div><div class='line' id='LC49'><span class="cm">/* Max buffer size supported by our tpm */</span></div><div class='line' id='LC50'><span class="cp">#define TPM_DEV_BUFSIZE		1260</span></div><div class='line' id='LC51'><br/></div><div class='line' id='LC52'><span class="cm">/* Max number of iterations after i2c NAK */</span></div><div class='line' id='LC53'><span class="cp">#define MAX_COUNT		3</span></div><div class='line' id='LC54'><span class="cm">/*</span></div><div class='line' id='LC55'><span class="cm"> * Max number of iterations after i2c NAK for &#39;long&#39; commands</span></div><div class='line' id='LC56'><span class="cm"> *</span></div><div class='line' id='LC57'><span class="cm"> * We need this especially for sending TPM_READY, since the cleanup after the</span></div><div class='line' id='LC58'><span class="cm"> * transtion to the ready state may take some time, but it is unpredictable</span></div><div class='line' id='LC59'><span class="cm"> * how long it will take.</span></div><div class='line' id='LC60'><span class="cm"> */</span></div><div class='line' id='LC61'><span class="cp">#define MAX_COUNT_LONG		50</span></div><div class='line' id='LC62'><br/></div><div class='line' id='LC63'><span class="cp">#define SLEEP_DURATION		60	</span><span class="cm">/* in usec */</span><span class="cp"></span></div><div class='line' id='LC64'><span class="cp">#define SLEEP_DURATION_LONG	210	</span><span class="cm">/* in usec */</span><span class="cp"></span></div><div class='line' id='LC65'><br/></div><div class='line' id='LC66'><span class="cp">#define TPM_HEADER_SIZE		10</span></div><div class='line' id='LC67'><br/></div><div class='line' id='LC68'><span class="cm">/*</span></div><div class='line' id='LC69'><span class="cm"> * Expected value for DIDVID register</span></div><div class='line' id='LC70'><span class="cm"> *</span></div><div class='line' id='LC71'><span class="cm"> * The only device the system knows about at this moment is Infineon slb9635.</span></div><div class='line' id='LC72'><span class="cm"> */</span></div><div class='line' id='LC73'><span class="cp">#define TPM_TIS_I2C_DID_VID	0x000b15d1L</span></div><div class='line' id='LC74'><br/></div><div class='line' id='LC75'><span class="k">enum</span> <span class="n">tis_access</span> <span class="p">{</span></div><div class='line' id='LC76'>	<span class="n">TPM_ACCESS_VALID</span>		<span class="o">=</span> <span class="mh">0x80</span><span class="p">,</span></div><div class='line' id='LC77'>	<span class="n">TPM_ACCESS_ACTIVE_LOCALITY</span>	<span class="o">=</span> <span class="mh">0x20</span><span class="p">,</span></div><div class='line' id='LC78'>	<span class="n">TPM_ACCESS_REQUEST_PENDING</span>	<span class="o">=</span> <span class="mh">0x04</span><span class="p">,</span></div><div class='line' id='LC79'>	<span class="n">TPM_ACCESS_REQUEST_USE</span>		<span class="o">=</span> <span class="mh">0x02</span><span class="p">,</span></div><div class='line' id='LC80'><span class="p">};</span></div><div class='line' id='LC81'><br/></div><div class='line' id='LC82'><span class="k">enum</span> <span class="n">tis_status</span> <span class="p">{</span></div><div class='line' id='LC83'>	<span class="n">TPM_STS_VALID</span>			<span class="o">=</span> <span class="mh">0x80</span><span class="p">,</span></div><div class='line' id='LC84'>	<span class="n">TPM_STS_COMMAND_READY</span>		<span class="o">=</span> <span class="mh">0x40</span><span class="p">,</span></div><div class='line' id='LC85'>	<span class="n">TPM_STS_GO</span>			<span class="o">=</span> <span class="mh">0x20</span><span class="p">,</span></div><div class='line' id='LC86'>	<span class="n">TPM_STS_DATA_AVAIL</span>		<span class="o">=</span> <span class="mh">0x10</span><span class="p">,</span></div><div class='line' id='LC87'>	<span class="n">TPM_STS_DATA_EXPECT</span>		<span class="o">=</span> <span class="mh">0x08</span><span class="p">,</span></div><div class='line' id='LC88'><span class="p">};</span></div><div class='line' id='LC89'><br/></div><div class='line' id='LC90'><span class="k">enum</span> <span class="n">tis_defaults</span> <span class="p">{</span></div><div class='line' id='LC91'>	<span class="n">TIS_SHORT_TIMEOUT</span>		<span class="o">=</span> <span class="mi">750</span><span class="p">,</span>	<span class="cm">/* ms */</span></div><div class='line' id='LC92'>	<span class="n">TIS_LONG_TIMEOUT</span>		<span class="o">=</span> <span class="mi">2000</span><span class="p">,</span>	<span class="cm">/* 2 sec */</span></div><div class='line' id='LC93'><span class="p">};</span></div><div class='line' id='LC94'><br/></div><div class='line' id='LC95'><span class="cm">/*</span></div><div class='line' id='LC96'><span class="cm"> * XXX: WARNING: i2c read/write functions must be able to NOT prepending slave</span></div><div class='line' id='LC97'><span class="cm"> * register address to payload, when addr=alen=0, because TPM chip expects</span></div><div class='line' id='LC98'><span class="cm"> * messages not coming with a register address.</span></div><div class='line' id='LC99'><span class="cm"> */</span></div><div class='line' id='LC100'><span class="cp">#define TPM_TIS_I2C_READ(chip, buf, len) i2c_read(chip, 0, 0, buf, len)</span></div><div class='line' id='LC101'><span class="cp">#define TPM_TIS_I2C_WRITE(chip, buf, len) i2c_write(chip, 0, 0, buf, len)</span></div><div class='line' id='LC102'><br/></div><div class='line' id='LC103'><span class="cp">#define TPM_ACCESS(l)			(0x0000 | ((l) &lt;&lt; 4))</span></div><div class='line' id='LC104'><span class="cp">#define TPM_STS(l)			(0x0001 | ((l) &lt;&lt; 4))</span></div><div class='line' id='LC105'><span class="cp">#define TPM_DATA_FIFO(l)		(0x0005 | ((l) &lt;&lt; 4))</span></div><div class='line' id='LC106'><span class="cp">#define TPM_DID_VID(l)			(0x0006 | ((l) &lt;&lt; 4))</span></div><div class='line' id='LC107'><br/></div><div class='line' id='LC108'><span class="cm">/* Structure to store I2C TPM specific stuff */</span></div><div class='line' id='LC109'><span class="k">struct</span> <span class="n">tpm_dev</span> <span class="p">{</span></div><div class='line' id='LC110'>	<span class="n">uint</span> <span class="n">addr</span><span class="p">;</span></div><div class='line' id='LC111'>	<span class="n">u8</span> <span class="n">buf</span><span class="p">[</span><span class="n">TPM_DEV_BUFSIZE</span> <span class="o">+</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">u8</span><span class="p">)];</span>  <span class="cm">/* Max buffer size + addr */</span></div><div class='line' id='LC112'><span class="p">};</span></div><div class='line' id='LC113'><br/></div><div class='line' id='LC114'><span class="k">static</span> <span class="k">struct</span> <span class="n">tpm_dev</span> <span class="n">tpm_dev</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC115'>	<span class="p">.</span><span class="n">addr</span> <span class="o">=</span> <span class="n">CONFIG_TPM_TIS_I2C_SLAVE_ADDRESS</span></div><div class='line' id='LC116'><span class="p">};</span></div><div class='line' id='LC117'><br/></div><div class='line' id='LC118'><span class="cm">/*</span></div><div class='line' id='LC119'><span class="cm"> * iic_tpm_read() - read from TPM register</span></div><div class='line' id='LC120'><span class="cm"> * @addr: register address to read from</span></div><div class='line' id='LC121'><span class="cm"> * @buffer: provided by caller</span></div><div class='line' id='LC122'><span class="cm"> * @len: number of bytes to read</span></div><div class='line' id='LC123'><span class="cm"> *</span></div><div class='line' id='LC124'><span class="cm"> * Read len bytes from TPM register and put them into</span></div><div class='line' id='LC125'><span class="cm"> * buffer (little-endian format, i.e. first byte is put into buffer[0]).</span></div><div class='line' id='LC126'><span class="cm"> *</span></div><div class='line' id='LC127'><span class="cm"> * NOTE: TPM is big-endian for multi-byte values. Multi-byte</span></div><div class='line' id='LC128'><span class="cm"> * values have to be swapped.</span></div><div class='line' id='LC129'><span class="cm"> *</span></div><div class='line' id='LC130'><span class="cm"> * Return -EIO on error, 0 on success.</span></div><div class='line' id='LC131'><span class="cm"> */</span></div><div class='line' id='LC132'><span class="k">static</span> <span class="kt">int</span> <span class="nf">iic_tpm_read</span><span class="p">(</span><span class="n">u8</span> <span class="n">addr</span><span class="p">,</span> <span class="n">u8</span> <span class="o">*</span><span class="n">buffer</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">len</span><span class="p">)</span></div><div class='line' id='LC133'><span class="p">{</span></div><div class='line' id='LC134'>	<span class="kt">int</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC135'>	<span class="kt">int</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC136'>	<span class="kt">uint32_t</span> <span class="n">addrbuf</span> <span class="o">=</span> <span class="n">addr</span><span class="p">;</span></div><div class='line' id='LC137'><br/></div><div class='line' id='LC138'>	<span class="k">for</span> <span class="p">(</span><span class="n">count</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">count</span> <span class="o">&lt;</span> <span class="n">MAX_COUNT</span><span class="p">;</span> <span class="n">count</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC139'>		<span class="n">rc</span> <span class="o">=</span> <span class="n">TPM_TIS_I2C_WRITE</span><span class="p">(</span><span class="n">tpm_dev</span><span class="p">.</span><span class="n">addr</span><span class="p">,</span> <span class="p">(</span><span class="n">uchar</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">addrbuf</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC140'>		<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC141'>			<span class="k">break</span><span class="p">;</span>  <span class="cm">/* Success, break to skip sleep */</span></div><div class='line' id='LC142'>		<span class="n">udelay</span><span class="p">(</span><span class="n">SLEEP_DURATION</span><span class="p">);</span></div><div class='line' id='LC143'>	<span class="p">}</span></div><div class='line' id='LC144'>	<span class="k">if</span> <span class="p">(</span><span class="n">rc</span><span class="p">)</span></div><div class='line' id='LC145'>		<span class="k">return</span> <span class="o">-</span><span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC146'><br/></div><div class='line' id='LC147'>	<span class="cm">/*</span></div><div class='line' id='LC148'><span class="cm">	 * After the TPM has successfully received the register address it needs</span></div><div class='line' id='LC149'><span class="cm">	 * some time, thus we&#39;re sleeping here again, before retrieving the data</span></div><div class='line' id='LC150'><span class="cm">	 */</span></div><div class='line' id='LC151'>	<span class="k">for</span> <span class="p">(</span><span class="n">count</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">count</span> <span class="o">&lt;</span> <span class="n">MAX_COUNT</span><span class="p">;</span> <span class="n">count</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC152'>		<span class="n">udelay</span><span class="p">(</span><span class="n">SLEEP_DURATION</span><span class="p">);</span></div><div class='line' id='LC153'>		<span class="n">rc</span> <span class="o">=</span> <span class="n">TPM_TIS_I2C_READ</span><span class="p">(</span><span class="n">tpm_dev</span><span class="p">.</span><span class="n">addr</span><span class="p">,</span> <span class="n">buffer</span><span class="p">,</span> <span class="n">len</span><span class="p">);</span></div><div class='line' id='LC154'>		<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC155'>			<span class="k">break</span><span class="p">;</span>  <span class="cm">/* Success, break to skip sleep */</span></div><div class='line' id='LC156'>	<span class="p">}</span></div><div class='line' id='LC157'>	<span class="k">if</span> <span class="p">(</span><span class="n">rc</span><span class="p">)</span></div><div class='line' id='LC158'>		<span class="k">return</span> <span class="o">-</span><span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC159'><br/></div><div class='line' id='LC160'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC161'><span class="p">}</span></div><div class='line' id='LC162'><br/></div><div class='line' id='LC163'><span class="k">static</span> <span class="kt">int</span> <span class="nf">iic_tpm_write_generic</span><span class="p">(</span><span class="n">u8</span> <span class="n">addr</span><span class="p">,</span> <span class="n">u8</span> <span class="o">*</span><span class="n">buffer</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">len</span><span class="p">,</span></div><div class='line' id='LC164'>		<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">sleep_time</span><span class="p">,</span> <span class="n">u8</span> <span class="n">max_count</span><span class="p">)</span></div><div class='line' id='LC165'><span class="p">{</span></div><div class='line' id='LC166'>	<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC167'>	<span class="kt">int</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC168'><br/></div><div class='line' id='LC169'>	<span class="cm">/* Prepare send buffer */</span></div><div class='line' id='LC170'>	<span class="n">tpm_dev</span><span class="p">.</span><span class="n">buf</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="n">addr</span><span class="p">;</span></div><div class='line' id='LC171'>	<span class="n">memcpy</span><span class="p">(</span><span class="o">&amp;</span><span class="p">(</span><span class="n">tpm_dev</span><span class="p">.</span><span class="n">buf</span><span class="p">[</span><span class="mi">1</span><span class="p">]),</span> <span class="n">buffer</span><span class="p">,</span> <span class="n">len</span><span class="p">);</span></div><div class='line' id='LC172'><br/></div><div class='line' id='LC173'>	<span class="k">for</span> <span class="p">(</span><span class="n">count</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">count</span> <span class="o">&lt;</span> <span class="n">max_count</span><span class="p">;</span> <span class="n">count</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC174'>		<span class="n">rc</span> <span class="o">=</span> <span class="n">TPM_TIS_I2C_WRITE</span><span class="p">(</span><span class="n">tpm_dev</span><span class="p">.</span><span class="n">addr</span><span class="p">,</span> <span class="n">tpm_dev</span><span class="p">.</span><span class="n">buf</span><span class="p">,</span> <span class="n">len</span> <span class="o">+</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC175'>		<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC176'>			<span class="k">break</span><span class="p">;</span>  <span class="cm">/* Success, break to skip sleep */</span></div><div class='line' id='LC177'>		<span class="n">udelay</span><span class="p">(</span><span class="n">sleep_time</span><span class="p">);</span></div><div class='line' id='LC178'>	<span class="p">}</span></div><div class='line' id='LC179'>	<span class="k">if</span> <span class="p">(</span><span class="n">rc</span><span class="p">)</span></div><div class='line' id='LC180'>		<span class="k">return</span> <span class="o">-</span><span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC181'><br/></div><div class='line' id='LC182'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC183'><span class="p">}</span></div><div class='line' id='LC184'><br/></div><div class='line' id='LC185'><span class="cm">/*</span></div><div class='line' id='LC186'><span class="cm"> * iic_tpm_write() - write to TPM register</span></div><div class='line' id='LC187'><span class="cm"> * @addr: register address to write to</span></div><div class='line' id='LC188'><span class="cm"> * @buffer: containing data to be written</span></div><div class='line' id='LC189'><span class="cm"> * @len: number of bytes to write</span></div><div class='line' id='LC190'><span class="cm"> *</span></div><div class='line' id='LC191'><span class="cm"> * Write len bytes from provided buffer to TPM register (little</span></div><div class='line' id='LC192'><span class="cm"> * endian format, i.e. buffer[0] is written as first byte).</span></div><div class='line' id='LC193'><span class="cm"> *</span></div><div class='line' id='LC194'><span class="cm"> * NOTE: TPM is big-endian for multi-byte values. Multi-byte</span></div><div class='line' id='LC195'><span class="cm"> * values have to be swapped.</span></div><div class='line' id='LC196'><span class="cm"> *</span></div><div class='line' id='LC197'><span class="cm"> * NOTE: use this function instead of the iic_tpm_write_generic function.</span></div><div class='line' id='LC198'><span class="cm"> *</span></div><div class='line' id='LC199'><span class="cm"> * Return -EIO on error, 0 on success</span></div><div class='line' id='LC200'><span class="cm"> */</span></div><div class='line' id='LC201'><span class="k">static</span> <span class="kt">int</span> <span class="nf">iic_tpm_write</span><span class="p">(</span><span class="n">u8</span> <span class="n">addr</span><span class="p">,</span> <span class="n">u8</span> <span class="o">*</span><span class="n">buffer</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">len</span><span class="p">)</span></div><div class='line' id='LC202'><span class="p">{</span></div><div class='line' id='LC203'>	<span class="k">return</span> <span class="n">iic_tpm_write_generic</span><span class="p">(</span><span class="n">addr</span><span class="p">,</span> <span class="n">buffer</span><span class="p">,</span> <span class="n">len</span><span class="p">,</span> <span class="n">SLEEP_DURATION</span><span class="p">,</span></div><div class='line' id='LC204'>			<span class="n">MAX_COUNT</span><span class="p">);</span></div><div class='line' id='LC205'><span class="p">}</span></div><div class='line' id='LC206'><br/></div><div class='line' id='LC207'><span class="cm">/*</span></div><div class='line' id='LC208'><span class="cm"> * This function is needed especially for the cleanup situation after</span></div><div class='line' id='LC209'><span class="cm"> * sending TPM_READY</span></div><div class='line' id='LC210'><span class="cm"> */</span></div><div class='line' id='LC211'><span class="k">static</span> <span class="kt">int</span> <span class="nf">iic_tpm_write_long</span><span class="p">(</span><span class="n">u8</span> <span class="n">addr</span><span class="p">,</span> <span class="n">u8</span> <span class="o">*</span><span class="n">buffer</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">len</span><span class="p">)</span></div><div class='line' id='LC212'><span class="p">{</span></div><div class='line' id='LC213'>	<span class="k">return</span> <span class="n">iic_tpm_write_generic</span><span class="p">(</span><span class="n">addr</span><span class="p">,</span> <span class="n">buffer</span><span class="p">,</span> <span class="n">len</span><span class="p">,</span> <span class="n">SLEEP_DURATION_LONG</span><span class="p">,</span></div><div class='line' id='LC214'>			<span class="n">MAX_COUNT_LONG</span><span class="p">);</span></div><div class='line' id='LC215'><span class="p">}</span></div><div class='line' id='LC216'><br/></div><div class='line' id='LC217'><span class="k">static</span> <span class="kt">int</span> <span class="nf">check_locality</span><span class="p">(</span><span class="k">struct</span> <span class="n">tpm_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="kt">int</span> <span class="n">loc</span><span class="p">)</span></div><div class='line' id='LC218'><span class="p">{</span></div><div class='line' id='LC219'>	<span class="k">const</span> <span class="n">u8</span> <span class="n">mask</span> <span class="o">=</span> <span class="n">TPM_ACCESS_ACTIVE_LOCALITY</span> <span class="o">|</span> <span class="n">TPM_ACCESS_VALID</span><span class="p">;</span></div><div class='line' id='LC220'>	<span class="n">u8</span> <span class="n">buf</span><span class="p">;</span></div><div class='line' id='LC221'>	<span class="kt">int</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC222'><br/></div><div class='line' id='LC223'>	<span class="n">rc</span> <span class="o">=</span> <span class="n">iic_tpm_read</span><span class="p">(</span><span class="n">TPM_ACCESS</span><span class="p">(</span><span class="n">loc</span><span class="p">),</span> <span class="o">&amp;</span><span class="n">buf</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC224'>	<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC225'>		<span class="k">return</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC226'><br/></div><div class='line' id='LC227'>	<span class="k">if</span> <span class="p">((</span><span class="n">buf</span> <span class="o">&amp;</span> <span class="n">mask</span><span class="p">)</span> <span class="o">==</span> <span class="n">mask</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC228'>		<span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">locality</span> <span class="o">=</span> <span class="n">loc</span><span class="p">;</span></div><div class='line' id='LC229'>		<span class="k">return</span> <span class="n">loc</span><span class="p">;</span></div><div class='line' id='LC230'>	<span class="p">}</span></div><div class='line' id='LC231'><br/></div><div class='line' id='LC232'>	<span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC233'><span class="p">}</span></div><div class='line' id='LC234'><br/></div><div class='line' id='LC235'><span class="k">static</span> <span class="kt">void</span> <span class="nf">release_locality</span><span class="p">(</span><span class="k">struct</span> <span class="n">tpm_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="kt">int</span> <span class="n">loc</span><span class="p">,</span> <span class="kt">int</span> <span class="n">force</span><span class="p">)</span></div><div class='line' id='LC236'><span class="p">{</span></div><div class='line' id='LC237'>	<span class="k">const</span> <span class="n">u8</span> <span class="n">mask</span> <span class="o">=</span> <span class="n">TPM_ACCESS_REQUEST_PENDING</span> <span class="o">|</span> <span class="n">TPM_ACCESS_VALID</span><span class="p">;</span></div><div class='line' id='LC238'>	<span class="n">u8</span> <span class="n">buf</span><span class="p">;</span></div><div class='line' id='LC239'><br/></div><div class='line' id='LC240'>	<span class="k">if</span> <span class="p">(</span><span class="n">iic_tpm_read</span><span class="p">(</span><span class="n">TPM_ACCESS</span><span class="p">(</span><span class="n">loc</span><span class="p">),</span> <span class="o">&amp;</span><span class="n">buf</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC241'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC242'><br/></div><div class='line' id='LC243'>	<span class="k">if</span> <span class="p">(</span><span class="n">force</span> <span class="o">||</span> <span class="p">(</span><span class="n">buf</span> <span class="o">&amp;</span> <span class="n">mask</span><span class="p">)</span> <span class="o">==</span> <span class="n">mask</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC244'>		<span class="n">buf</span> <span class="o">=</span> <span class="n">TPM_ACCESS_ACTIVE_LOCALITY</span><span class="p">;</span></div><div class='line' id='LC245'>		<span class="n">iic_tpm_write</span><span class="p">(</span><span class="n">TPM_ACCESS</span><span class="p">(</span><span class="n">loc</span><span class="p">),</span> <span class="o">&amp;</span><span class="n">buf</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC246'>	<span class="p">}</span></div><div class='line' id='LC247'><span class="p">}</span></div><div class='line' id='LC248'><br/></div><div class='line' id='LC249'><span class="k">static</span> <span class="kt">int</span> <span class="nf">request_locality</span><span class="p">(</span><span class="k">struct</span> <span class="n">tpm_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="kt">int</span> <span class="n">loc</span><span class="p">)</span></div><div class='line' id='LC250'><span class="p">{</span></div><div class='line' id='LC251'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">start</span><span class="p">,</span> <span class="n">stop</span><span class="p">;</span></div><div class='line' id='LC252'>	<span class="n">u8</span> <span class="n">buf</span> <span class="o">=</span> <span class="n">TPM_ACCESS_REQUEST_USE</span><span class="p">;</span></div><div class='line' id='LC253'><br/></div><div class='line' id='LC254'>	<span class="k">if</span> <span class="p">(</span><span class="n">check_locality</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="n">loc</span><span class="p">)</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC255'>		<span class="k">return</span> <span class="n">loc</span><span class="p">;</span>  <span class="cm">/* We already have the locality */</span></div><div class='line' id='LC256'><br/></div><div class='line' id='LC257'>	<span class="n">iic_tpm_write</span><span class="p">(</span><span class="n">TPM_ACCESS</span><span class="p">(</span><span class="n">loc</span><span class="p">),</span> <span class="o">&amp;</span><span class="n">buf</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC258'><br/></div><div class='line' id='LC259'>	<span class="cm">/* Wait for burstcount */</span></div><div class='line' id='LC260'>	<span class="n">start</span> <span class="o">=</span> <span class="n">get_timer</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC261'>	<span class="n">stop</span> <span class="o">=</span> <span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">timeout_a</span><span class="p">;</span></div><div class='line' id='LC262'>	<span class="k">do</span> <span class="p">{</span></div><div class='line' id='LC263'>		<span class="k">if</span> <span class="p">(</span><span class="n">check_locality</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="n">loc</span><span class="p">)</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC264'>			<span class="k">return</span> <span class="n">loc</span><span class="p">;</span></div><div class='line' id='LC265'>		<span class="n">udelay</span><span class="p">(</span><span class="n">TPM_TIMEOUT</span> <span class="o">*</span> <span class="mi">1000</span><span class="p">);</span></div><div class='line' id='LC266'>	<span class="p">}</span> <span class="k">while</span> <span class="p">(</span><span class="n">get_timer</span><span class="p">(</span><span class="n">start</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">stop</span><span class="p">);</span></div><div class='line' id='LC267'><br/></div><div class='line' id='LC268'>	<span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC269'><span class="p">}</span></div><div class='line' id='LC270'><br/></div><div class='line' id='LC271'><span class="k">static</span> <span class="n">u8</span> <span class="nf">tpm_tis_i2c_status</span><span class="p">(</span><span class="k">struct</span> <span class="n">tpm_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">)</span></div><div class='line' id='LC272'><span class="p">{</span></div><div class='line' id='LC273'>	<span class="cm">/* NOTE: Since i2c read may fail, return 0 in this case --&gt; time-out */</span></div><div class='line' id='LC274'>	<span class="n">u8</span> <span class="n">buf</span><span class="p">;</span></div><div class='line' id='LC275'><br/></div><div class='line' id='LC276'>	<span class="k">if</span> <span class="p">(</span><span class="n">iic_tpm_read</span><span class="p">(</span><span class="n">TPM_STS</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">locality</span><span class="p">),</span> <span class="o">&amp;</span><span class="n">buf</span><span class="p">,</span> <span class="mi">1</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC277'>		<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC278'>	<span class="k">else</span></div><div class='line' id='LC279'>		<span class="k">return</span> <span class="n">buf</span><span class="p">;</span></div><div class='line' id='LC280'><span class="p">}</span></div><div class='line' id='LC281'><br/></div><div class='line' id='LC282'><span class="k">static</span> <span class="kt">void</span> <span class="nf">tpm_tis_i2c_ready</span><span class="p">(</span><span class="k">struct</span> <span class="n">tpm_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">)</span></div><div class='line' id='LC283'><span class="p">{</span></div><div class='line' id='LC284'>	<span class="cm">/* This causes the current command to be aborted */</span></div><div class='line' id='LC285'>	<span class="n">u8</span> <span class="n">buf</span> <span class="o">=</span> <span class="n">TPM_STS_COMMAND_READY</span><span class="p">;</span></div><div class='line' id='LC286'><br/></div><div class='line' id='LC287'>	<span class="n">iic_tpm_write_long</span><span class="p">(</span><span class="n">TPM_STS</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">locality</span><span class="p">),</span> <span class="o">&amp;</span><span class="n">buf</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC288'><span class="p">}</span></div><div class='line' id='LC289'><br/></div><div class='line' id='LC290'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">get_burstcount</span><span class="p">(</span><span class="k">struct</span> <span class="n">tpm_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">)</span></div><div class='line' id='LC291'><span class="p">{</span></div><div class='line' id='LC292'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">start</span><span class="p">,</span> <span class="n">stop</span><span class="p">;</span></div><div class='line' id='LC293'>	<span class="kt">ssize_t</span> <span class="n">burstcnt</span><span class="p">;</span></div><div class='line' id='LC294'>	<span class="n">u8</span> <span class="n">addr</span><span class="p">,</span> <span class="n">buf</span><span class="p">[</span><span class="mi">3</span><span class="p">];</span></div><div class='line' id='LC295'><br/></div><div class='line' id='LC296'>	<span class="cm">/* Wait for burstcount */</span></div><div class='line' id='LC297'>	<span class="cm">/* XXX: Which timeout value? Spec has 2 answers (c &amp; d) */</span></div><div class='line' id='LC298'>	<span class="n">start</span> <span class="o">=</span> <span class="n">get_timer</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC299'>	<span class="n">stop</span> <span class="o">=</span> <span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">timeout_d</span><span class="p">;</span></div><div class='line' id='LC300'>	<span class="k">do</span> <span class="p">{</span></div><div class='line' id='LC301'>		<span class="cm">/* Note: STS is little endian */</span></div><div class='line' id='LC302'>		<span class="n">addr</span> <span class="o">=</span> <span class="n">TPM_STS</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">locality</span><span class="p">)</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC303'>		<span class="k">if</span> <span class="p">(</span><span class="n">iic_tpm_read</span><span class="p">(</span><span class="n">addr</span><span class="p">,</span> <span class="n">buf</span><span class="p">,</span> <span class="mi">3</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC304'>			<span class="n">burstcnt</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC305'>		<span class="k">else</span></div><div class='line' id='LC306'>			<span class="n">burstcnt</span> <span class="o">=</span> <span class="p">(</span><span class="n">buf</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">&lt;&lt;</span> <span class="mi">16</span><span class="p">)</span> <span class="o">+</span> <span class="p">(</span><span class="n">buf</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">&lt;&lt;</span> <span class="mi">8</span><span class="p">)</span> <span class="o">+</span> <span class="n">buf</span><span class="p">[</span><span class="mi">0</span><span class="p">];</span></div><div class='line' id='LC307'><br/></div><div class='line' id='LC308'>		<span class="k">if</span> <span class="p">(</span><span class="n">burstcnt</span><span class="p">)</span></div><div class='line' id='LC309'>			<span class="k">return</span> <span class="n">burstcnt</span><span class="p">;</span></div><div class='line' id='LC310'>		<span class="n">udelay</span><span class="p">(</span><span class="n">TPM_TIMEOUT</span> <span class="o">*</span> <span class="mi">1000</span><span class="p">);</span></div><div class='line' id='LC311'>	<span class="p">}</span> <span class="k">while</span> <span class="p">(</span><span class="n">get_timer</span><span class="p">(</span><span class="n">start</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">stop</span><span class="p">);</span></div><div class='line' id='LC312'><br/></div><div class='line' id='LC313'>	<span class="k">return</span> <span class="o">-</span><span class="n">EBUSY</span><span class="p">;</span></div><div class='line' id='LC314'><span class="p">}</span></div><div class='line' id='LC315'><br/></div><div class='line' id='LC316'><span class="k">static</span> <span class="kt">int</span> <span class="nf">wait_for_stat</span><span class="p">(</span><span class="k">struct</span> <span class="n">tpm_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="n">u8</span> <span class="n">mask</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">timeout</span><span class="p">,</span></div><div class='line' id='LC317'>		<span class="kt">int</span> <span class="o">*</span><span class="n">status</span><span class="p">)</span></div><div class='line' id='LC318'><span class="p">{</span></div><div class='line' id='LC319'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">start</span><span class="p">,</span> <span class="n">stop</span><span class="p">;</span></div><div class='line' id='LC320'><br/></div><div class='line' id='LC321'>	<span class="cm">/* Check current status */</span></div><div class='line' id='LC322'>	<span class="o">*</span><span class="n">status</span> <span class="o">=</span> <span class="n">tpm_tis_i2c_status</span><span class="p">(</span><span class="n">chip</span><span class="p">);</span></div><div class='line' id='LC323'>	<span class="k">if</span> <span class="p">((</span><span class="o">*</span><span class="n">status</span> <span class="o">&amp;</span> <span class="n">mask</span><span class="p">)</span> <span class="o">==</span> <span class="n">mask</span><span class="p">)</span></div><div class='line' id='LC324'>		<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC325'><br/></div><div class='line' id='LC326'>	<span class="n">start</span> <span class="o">=</span> <span class="n">get_timer</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC327'>	<span class="n">stop</span> <span class="o">=</span> <span class="n">timeout</span><span class="p">;</span></div><div class='line' id='LC328'>	<span class="k">do</span> <span class="p">{</span></div><div class='line' id='LC329'>		<span class="n">udelay</span><span class="p">(</span><span class="n">TPM_TIMEOUT</span> <span class="o">*</span> <span class="mi">1000</span><span class="p">);</span></div><div class='line' id='LC330'>		<span class="o">*</span><span class="n">status</span> <span class="o">=</span> <span class="n">tpm_tis_i2c_status</span><span class="p">(</span><span class="n">chip</span><span class="p">);</span></div><div class='line' id='LC331'>		<span class="k">if</span> <span class="p">((</span><span class="o">*</span><span class="n">status</span> <span class="o">&amp;</span> <span class="n">mask</span><span class="p">)</span> <span class="o">==</span> <span class="n">mask</span><span class="p">)</span></div><div class='line' id='LC332'>			<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC333'>	<span class="p">}</span> <span class="k">while</span> <span class="p">(</span><span class="n">get_timer</span><span class="p">(</span><span class="n">start</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">stop</span><span class="p">);</span></div><div class='line' id='LC334'><br/></div><div class='line' id='LC335'>	<span class="k">return</span> <span class="o">-</span><span class="n">ETIME</span><span class="p">;</span></div><div class='line' id='LC336'><span class="p">}</span></div><div class='line' id='LC337'><br/></div><div class='line' id='LC338'><span class="k">static</span> <span class="kt">int</span> <span class="nf">recv_data</span><span class="p">(</span><span class="k">struct</span> <span class="n">tpm_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="n">u8</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC339'><span class="p">{</span></div><div class='line' id='LC340'>	<span class="kt">size_t</span> <span class="n">size</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC341'>	<span class="kt">ssize_t</span> <span class="n">burstcnt</span><span class="p">;</span></div><div class='line' id='LC342'>	<span class="kt">int</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC343'><br/></div><div class='line' id='LC344'>	<span class="k">while</span> <span class="p">(</span><span class="n">size</span> <span class="o">&lt;</span> <span class="n">count</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC345'>		<span class="n">burstcnt</span> <span class="o">=</span> <span class="n">get_burstcount</span><span class="p">(</span><span class="n">chip</span><span class="p">);</span></div><div class='line' id='LC346'><br/></div><div class='line' id='LC347'>		<span class="cm">/* burstcount &lt; 0 -&gt; tpm is busy */</span></div><div class='line' id='LC348'>		<span class="k">if</span> <span class="p">(</span><span class="n">burstcnt</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC349'>			<span class="k">return</span> <span class="n">burstcnt</span><span class="p">;</span></div><div class='line' id='LC350'><br/></div><div class='line' id='LC351'>		<span class="cm">/* Limit received data to max left */</span></div><div class='line' id='LC352'>		<span class="k">if</span> <span class="p">(</span><span class="n">burstcnt</span> <span class="o">&gt;</span> <span class="p">(</span><span class="n">count</span> <span class="o">-</span> <span class="n">size</span><span class="p">))</span></div><div class='line' id='LC353'>			<span class="n">burstcnt</span> <span class="o">=</span> <span class="n">count</span> <span class="o">-</span> <span class="n">size</span><span class="p">;</span></div><div class='line' id='LC354'><br/></div><div class='line' id='LC355'>		<span class="n">rc</span> <span class="o">=</span> <span class="n">iic_tpm_read</span><span class="p">(</span><span class="n">TPM_DATA_FIFO</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">locality</span><span class="p">),</span></div><div class='line' id='LC356'>				<span class="o">&amp;</span><span class="p">(</span><span class="n">buf</span><span class="p">[</span><span class="n">size</span><span class="p">]),</span> <span class="n">burstcnt</span><span class="p">);</span></div><div class='line' id='LC357'>		<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC358'>			<span class="n">size</span> <span class="o">+=</span> <span class="n">burstcnt</span><span class="p">;</span></div><div class='line' id='LC359'>	<span class="p">}</span></div><div class='line' id='LC360'><br/></div><div class='line' id='LC361'>	<span class="k">return</span> <span class="n">size</span><span class="p">;</span></div><div class='line' id='LC362'><span class="p">}</span></div><div class='line' id='LC363'><br/></div><div class='line' id='LC364'><span class="k">static</span> <span class="kt">int</span> <span class="nf">tpm_tis_i2c_recv</span><span class="p">(</span><span class="k">struct</span> <span class="n">tpm_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="n">u8</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC365'><span class="p">{</span></div><div class='line' id='LC366'>	<span class="kt">int</span> <span class="n">size</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC367'>	<span class="kt">int</span> <span class="n">expected</span><span class="p">,</span> <span class="n">status</span><span class="p">;</span></div><div class='line' id='LC368'><br/></div><div class='line' id='LC369'>	<span class="k">if</span> <span class="p">(</span><span class="n">count</span> <span class="o">&lt;</span> <span class="n">TPM_HEADER_SIZE</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC370'>		<span class="n">size</span> <span class="o">=</span> <span class="o">-</span><span class="n">EIO</span><span class="p">;</span></div><div class='line' id='LC371'>		<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC372'>	<span class="p">}</span></div><div class='line' id='LC373'><br/></div><div class='line' id='LC374'>	<span class="cm">/* Read first 10 bytes, including tag, paramsize, and result */</span></div><div class='line' id='LC375'>	<span class="n">size</span> <span class="o">=</span> <span class="n">recv_data</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="n">buf</span><span class="p">,</span> <span class="n">TPM_HEADER_SIZE</span><span class="p">);</span></div><div class='line' id='LC376'>	<span class="k">if</span> <span class="p">(</span><span class="n">size</span> <span class="o">&lt;</span> <span class="n">TPM_HEADER_SIZE</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC377'>		<span class="n">error</span><span class="p">(</span><span class="s">&quot;Unable to read header</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC378'>		<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC379'>	<span class="p">}</span></div><div class='line' id='LC380'><br/></div><div class='line' id='LC381'>	<span class="n">expected</span> <span class="o">=</span> <span class="n">get_unaligned_be32</span><span class="p">(</span><span class="n">buf</span> <span class="o">+</span> <span class="n">TPM_RSP_SIZE_BYTE</span><span class="p">);</span></div><div class='line' id='LC382'>	<span class="k">if</span> <span class="p">((</span><span class="kt">size_t</span><span class="p">)</span><span class="n">expected</span> <span class="o">&gt;</span> <span class="n">count</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC383'>		<span class="n">size</span> <span class="o">=</span> <span class="o">-</span><span class="n">EIO</span><span class="p">;</span></div><div class='line' id='LC384'>		<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC385'>	<span class="p">}</span></div><div class='line' id='LC386'><br/></div><div class='line' id='LC387'>	<span class="n">size</span> <span class="o">+=</span> <span class="n">recv_data</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">buf</span><span class="p">[</span><span class="n">TPM_HEADER_SIZE</span><span class="p">],</span></div><div class='line' id='LC388'>			<span class="n">expected</span> <span class="o">-</span> <span class="n">TPM_HEADER_SIZE</span><span class="p">);</span></div><div class='line' id='LC389'>	<span class="k">if</span> <span class="p">(</span><span class="n">size</span> <span class="o">&lt;</span> <span class="n">expected</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC390'>		<span class="n">error</span><span class="p">(</span><span class="s">&quot;Unable to read remainder of result</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC391'>		<span class="n">size</span> <span class="o">=</span> <span class="o">-</span><span class="n">ETIME</span><span class="p">;</span></div><div class='line' id='LC392'>		<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC393'>	<span class="p">}</span></div><div class='line' id='LC394'><br/></div><div class='line' id='LC395'>	<span class="n">wait_for_stat</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="n">TPM_STS_VALID</span><span class="p">,</span> <span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">timeout_c</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">status</span><span class="p">);</span></div><div class='line' id='LC396'>	<span class="k">if</span> <span class="p">(</span><span class="n">status</span> <span class="o">&amp;</span> <span class="n">TPM_STS_DATA_AVAIL</span><span class="p">)</span> <span class="p">{</span>  <span class="cm">/* Retry? */</span></div><div class='line' id='LC397'>		<span class="n">error</span><span class="p">(</span><span class="s">&quot;Error left over data</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC398'>		<span class="n">size</span> <span class="o">=</span> <span class="o">-</span><span class="n">EIO</span><span class="p">;</span></div><div class='line' id='LC399'>		<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC400'>	<span class="p">}</span></div><div class='line' id='LC401'><br/></div><div class='line' id='LC402'><span class="nl">out:</span></div><div class='line' id='LC403'>	<span class="n">tpm_tis_i2c_ready</span><span class="p">(</span><span class="n">chip</span><span class="p">);</span></div><div class='line' id='LC404'>	<span class="cm">/*</span></div><div class='line' id='LC405'><span class="cm">	 * The TPM needs some time to clean up here,</span></div><div class='line' id='LC406'><span class="cm">	 * so we sleep rather than keeping the bus busy</span></div><div class='line' id='LC407'><span class="cm">	 */</span></div><div class='line' id='LC408'>	<span class="n">udelay</span><span class="p">(</span><span class="mi">2000</span><span class="p">);</span></div><div class='line' id='LC409'>	<span class="n">release_locality</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">locality</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC410'><br/></div><div class='line' id='LC411'>	<span class="k">return</span> <span class="n">size</span><span class="p">;</span></div><div class='line' id='LC412'><span class="p">}</span></div><div class='line' id='LC413'><br/></div><div class='line' id='LC414'><span class="k">static</span> <span class="kt">int</span> <span class="nf">tpm_tis_i2c_send</span><span class="p">(</span><span class="k">struct</span> <span class="n">tpm_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="n">u8</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">len</span><span class="p">)</span></div><div class='line' id='LC415'><span class="p">{</span></div><div class='line' id='LC416'>	<span class="kt">int</span> <span class="n">rc</span><span class="p">,</span> <span class="n">status</span><span class="p">;</span></div><div class='line' id='LC417'>	<span class="kt">ssize_t</span> <span class="n">burstcnt</span><span class="p">;</span></div><div class='line' id='LC418'>	<span class="kt">size_t</span> <span class="n">count</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC419'>	<span class="kt">int</span> <span class="n">retry</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC420'>	<span class="n">u8</span> <span class="n">sts</span> <span class="o">=</span> <span class="n">TPM_STS_GO</span><span class="p">;</span></div><div class='line' id='LC421'><br/></div><div class='line' id='LC422'>	<span class="k">if</span> <span class="p">(</span><span class="n">len</span> <span class="o">&gt;</span> <span class="n">TPM_DEV_BUFSIZE</span><span class="p">)</span></div><div class='line' id='LC423'>		<span class="k">return</span> <span class="o">-</span><span class="n">E2BIG</span><span class="p">;</span>  <span class="cm">/* Command is too long for our tpm, sorry */</span></div><div class='line' id='LC424'><br/></div><div class='line' id='LC425'>	<span class="k">if</span> <span class="p">(</span><span class="n">request_locality</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC426'>		<span class="k">return</span> <span class="o">-</span><span class="n">EBUSY</span><span class="p">;</span></div><div class='line' id='LC427'><br/></div><div class='line' id='LC428'>	<span class="n">status</span> <span class="o">=</span> <span class="n">tpm_tis_i2c_status</span><span class="p">(</span><span class="n">chip</span><span class="p">);</span></div><div class='line' id='LC429'>	<span class="k">if</span> <span class="p">((</span><span class="n">status</span> <span class="o">&amp;</span> <span class="n">TPM_STS_COMMAND_READY</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC430'>		<span class="n">tpm_tis_i2c_ready</span><span class="p">(</span><span class="n">chip</span><span class="p">);</span></div><div class='line' id='LC431'>		<span class="k">if</span> <span class="p">(</span><span class="n">wait_for_stat</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="n">TPM_STS_COMMAND_READY</span><span class="p">,</span></div><div class='line' id='LC432'>					<span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">timeout_b</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">status</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC433'>			<span class="n">rc</span> <span class="o">=</span> <span class="o">-</span><span class="n">ETIME</span><span class="p">;</span></div><div class='line' id='LC434'>			<span class="k">goto</span> <span class="n">out_err</span><span class="p">;</span></div><div class='line' id='LC435'>		<span class="p">}</span></div><div class='line' id='LC436'>	<span class="p">}</span></div><div class='line' id='LC437'><br/></div><div class='line' id='LC438'>	<span class="n">burstcnt</span> <span class="o">=</span> <span class="n">get_burstcount</span><span class="p">(</span><span class="n">chip</span><span class="p">);</span></div><div class='line' id='LC439'><br/></div><div class='line' id='LC440'>	<span class="cm">/* burstcount &lt; 0 = tpm is busy */</span></div><div class='line' id='LC441'>	<span class="k">if</span> <span class="p">(</span><span class="n">burstcnt</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC442'>		<span class="k">return</span> <span class="n">burstcnt</span><span class="p">;</span></div><div class='line' id='LC443'><br/></div><div class='line' id='LC444'>	<span class="k">while</span> <span class="p">(</span><span class="n">count</span> <span class="o">&lt;</span> <span class="n">len</span> <span class="o">-</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC445'>		<span class="k">if</span> <span class="p">(</span><span class="n">burstcnt</span> <span class="o">&gt;</span> <span class="n">len</span> <span class="o">-</span> <span class="mi">1</span> <span class="o">-</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC446'>			<span class="n">burstcnt</span> <span class="o">=</span> <span class="n">len</span> <span class="o">-</span> <span class="mi">1</span> <span class="o">-</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC447'><br/></div><div class='line' id='LC448'><span class="cp">#ifdef CONFIG_TPM_TIS_I2C_BURST_LIMITATION</span></div><div class='line' id='LC449'>		<span class="k">if</span> <span class="p">(</span><span class="n">retry</span> <span class="o">&amp;&amp;</span> <span class="n">burstcnt</span> <span class="o">&gt;</span> <span class="n">CONFIG_TPM_TIS_I2C_BURST_LIMITATION</span><span class="p">)</span></div><div class='line' id='LC450'>			<span class="n">burstcnt</span> <span class="o">=</span> <span class="n">CONFIG_TPM_TIS_I2C_BURST_LIMITATION</span><span class="p">;</span></div><div class='line' id='LC451'><span class="cp">#endif </span><span class="cm">/* CONFIG_TPM_TIS_I2C_BURST_LIMITATION */</span><span class="cp"></span></div><div class='line' id='LC452'><br/></div><div class='line' id='LC453'>		<span class="n">rc</span> <span class="o">=</span> <span class="n">iic_tpm_write</span><span class="p">(</span><span class="n">TPM_DATA_FIFO</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">locality</span><span class="p">),</span></div><div class='line' id='LC454'>				<span class="o">&amp;</span><span class="p">(</span><span class="n">buf</span><span class="p">[</span><span class="n">count</span><span class="p">]),</span> <span class="n">burstcnt</span><span class="p">);</span></div><div class='line' id='LC455'>		<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC456'>			<span class="n">count</span> <span class="o">+=</span> <span class="n">burstcnt</span><span class="p">;</span></div><div class='line' id='LC457'>		<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC458'>			<span class="n">retry</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC459'>			<span class="n">wait_for_stat</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="n">TPM_STS_VALID</span><span class="p">,</span></div><div class='line' id='LC460'>					<span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">timeout_c</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">status</span><span class="p">);</span></div><div class='line' id='LC461'><br/></div><div class='line' id='LC462'>			<span class="k">if</span> <span class="p">((</span><span class="n">status</span> <span class="o">&amp;</span> <span class="n">TPM_STS_DATA_EXPECT</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC463'>				<span class="n">rc</span> <span class="o">=</span> <span class="o">-</span><span class="n">EIO</span><span class="p">;</span></div><div class='line' id='LC464'>				<span class="k">goto</span> <span class="n">out_err</span><span class="p">;</span></div><div class='line' id='LC465'>			<span class="p">}</span></div><div class='line' id='LC466'>		<span class="p">}</span></div><div class='line' id='LC467'><br/></div><div class='line' id='LC468'>	<span class="p">}</span></div><div class='line' id='LC469'><br/></div><div class='line' id='LC470'>	<span class="cm">/* Write last byte */</span></div><div class='line' id='LC471'>	<span class="n">iic_tpm_write</span><span class="p">(</span><span class="n">TPM_DATA_FIFO</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">locality</span><span class="p">),</span> <span class="o">&amp;</span><span class="p">(</span><span class="n">buf</span><span class="p">[</span><span class="n">count</span><span class="p">]),</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC472'>	<span class="n">wait_for_stat</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="n">TPM_STS_VALID</span><span class="p">,</span> <span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">timeout_c</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">status</span><span class="p">);</span></div><div class='line' id='LC473'>	<span class="k">if</span> <span class="p">((</span><span class="n">status</span> <span class="o">&amp;</span> <span class="n">TPM_STS_DATA_EXPECT</span><span class="p">)</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC474'>		<span class="n">rc</span> <span class="o">=</span> <span class="o">-</span><span class="n">EIO</span><span class="p">;</span></div><div class='line' id='LC475'>		<span class="k">goto</span> <span class="n">out_err</span><span class="p">;</span></div><div class='line' id='LC476'>	<span class="p">}</span></div><div class='line' id='LC477'><br/></div><div class='line' id='LC478'>	<span class="cm">/* Go and do it */</span></div><div class='line' id='LC479'>	<span class="n">iic_tpm_write</span><span class="p">(</span><span class="n">TPM_STS</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">locality</span><span class="p">),</span> <span class="o">&amp;</span><span class="n">sts</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC480'><br/></div><div class='line' id='LC481'>	<span class="k">return</span> <span class="n">len</span><span class="p">;</span></div><div class='line' id='LC482'><br/></div><div class='line' id='LC483'><span class="nl">out_err:</span></div><div class='line' id='LC484'>	<span class="n">tpm_tis_i2c_ready</span><span class="p">(</span><span class="n">chip</span><span class="p">);</span></div><div class='line' id='LC485'>	<span class="cm">/*</span></div><div class='line' id='LC486'><span class="cm">	 * The TPM needs some time to clean up here,</span></div><div class='line' id='LC487'><span class="cm">	 * so we sleep rather than keeping the bus busy</span></div><div class='line' id='LC488'><span class="cm">	 */</span></div><div class='line' id='LC489'>	<span class="n">udelay</span><span class="p">(</span><span class="mi">2000</span><span class="p">);</span></div><div class='line' id='LC490'>	<span class="n">release_locality</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">locality</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC491'><br/></div><div class='line' id='LC492'>	<span class="k">return</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC493'><span class="p">}</span></div><div class='line' id='LC494'><br/></div><div class='line' id='LC495'><span class="k">static</span> <span class="k">struct</span> <span class="n">tpm_vendor_specific</span> <span class="n">tpm_tis_i2c</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC496'>	<span class="p">.</span><span class="n">status</span> <span class="o">=</span> <span class="n">tpm_tis_i2c_status</span><span class="p">,</span></div><div class='line' id='LC497'>	<span class="p">.</span><span class="n">recv</span> <span class="o">=</span> <span class="n">tpm_tis_i2c_recv</span><span class="p">,</span></div><div class='line' id='LC498'>	<span class="p">.</span><span class="n">send</span> <span class="o">=</span> <span class="n">tpm_tis_i2c_send</span><span class="p">,</span></div><div class='line' id='LC499'>	<span class="p">.</span><span class="n">cancel</span> <span class="o">=</span> <span class="n">tpm_tis_i2c_ready</span><span class="p">,</span></div><div class='line' id='LC500'>	<span class="p">.</span><span class="n">req_complete_mask</span> <span class="o">=</span> <span class="n">TPM_STS_DATA_AVAIL</span> <span class="o">|</span> <span class="n">TPM_STS_VALID</span><span class="p">,</span></div><div class='line' id='LC501'>	<span class="p">.</span><span class="n">req_complete_val</span> <span class="o">=</span> <span class="n">TPM_STS_DATA_AVAIL</span> <span class="o">|</span> <span class="n">TPM_STS_VALID</span><span class="p">,</span></div><div class='line' id='LC502'>	<span class="p">.</span><span class="n">req_canceled</span> <span class="o">=</span> <span class="n">TPM_STS_COMMAND_READY</span><span class="p">,</span></div><div class='line' id='LC503'><span class="p">};</span></div><div class='line' id='LC504'><br/></div><div class='line' id='LC505'><span class="kt">int</span> <span class="nf">tpm_vendor_init</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC506'><span class="p">{</span></div><div class='line' id='LC507'>	<span class="kt">int</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC508'>	<span class="n">rc</span> <span class="o">=</span> <span class="n">i2c_set_bus_num</span><span class="p">(</span><span class="n">CONFIG_TPM_TIS_I2C_BUS_NUMBER</span><span class="p">);</span></div><div class='line' id='LC509'>	<span class="k">if</span> <span class="p">(</span><span class="n">rc</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC510'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;%s: fail: i2c_set_bus_num(0x%x) return %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">__func__</span><span class="p">,</span></div><div class='line' id='LC511'>				<span class="n">CONFIG_TPM_TIS_I2C_BUS_NUMBER</span><span class="p">,</span> <span class="n">rc</span><span class="p">);</span></div><div class='line' id='LC512'>		<span class="k">return</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC513'>	<span class="p">}</span></div><div class='line' id='LC514'><br/></div><div class='line' id='LC515'>	<span class="cm">/*</span></div><div class='line' id='LC516'><span class="cm">	 * i2c_probe() could fail in the first time because TPM chip may fall</span></div><div class='line' id='LC517'><span class="cm">	 * asleep sometimes.  But the TPM chip should wake up on the first i2c</span></div><div class='line' id='LC518'><span class="cm">	 * probe, and the second i2c probe should succeed.</span></div><div class='line' id='LC519'><span class="cm">	 */</span></div><div class='line' id='LC520'>	<span class="k">if</span> <span class="p">(</span><span class="n">i2c_probe</span><span class="p">(</span><span class="n">CONFIG_TPM_TIS_I2C_SLAVE_ADDRESS</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC521'>		<span class="n">rc</span> <span class="o">=</span> <span class="n">i2c_probe</span><span class="p">(</span><span class="n">CONFIG_TPM_TIS_I2C_SLAVE_ADDRESS</span><span class="p">);</span></div><div class='line' id='LC522'>		<span class="k">if</span> <span class="p">(</span><span class="n">rc</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC523'>			<span class="n">printf</span><span class="p">(</span><span class="s">&quot;%s: fail: i2c_probe(0x%x) return %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">__func__</span><span class="p">,</span></div><div class='line' id='LC524'>					<span class="n">CONFIG_TPM_TIS_I2C_SLAVE_ADDRESS</span><span class="p">,</span> <span class="n">rc</span><span class="p">);</span></div><div class='line' id='LC525'>			<span class="k">return</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC526'>		<span class="p">}</span></div><div class='line' id='LC527'>	<span class="p">}</span></div><div class='line' id='LC528'><br/></div><div class='line' id='LC529'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC530'><span class="p">}</span></div><div class='line' id='LC531'><br/></div><div class='line' id='LC532'><span class="kt">int</span> <span class="nf">tpm_vendor_open</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC533'><span class="p">{</span></div><div class='line' id='LC534'>	<span class="n">u32</span> <span class="n">vendor</span><span class="p">;</span></div><div class='line' id='LC535'>	<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC536'>	<span class="k">struct</span> <span class="n">tpm_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">;</span></div><div class='line' id='LC537'><br/></div><div class='line' id='LC538'>	<span class="n">chip</span> <span class="o">=</span> <span class="n">tpm_register_hardware</span><span class="p">(</span><span class="o">&amp;</span><span class="n">tpm_tis_i2c</span><span class="p">);</span></div><div class='line' id='LC539'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">chip</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC540'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;tpm_register_hardware failed: %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">rc</span><span class="p">);</span></div><div class='line' id='LC541'>		<span class="n">rc</span> <span class="o">=</span> <span class="o">-</span><span class="n">ENODEV</span><span class="p">;</span></div><div class='line' id='LC542'>		<span class="k">goto</span> <span class="n">out_err</span><span class="p">;</span></div><div class='line' id='LC543'>	<span class="p">}</span></div><div class='line' id='LC544'><br/></div><div class='line' id='LC545'>	<span class="cm">/* Default timeouts */</span></div><div class='line' id='LC546'>	<span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">timeout_a</span> <span class="o">=</span> <span class="n">TIS_SHORT_TIMEOUT</span><span class="p">;</span></div><div class='line' id='LC547'>	<span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">timeout_b</span> <span class="o">=</span> <span class="n">TIS_LONG_TIMEOUT</span><span class="p">;</span></div><div class='line' id='LC548'>	<span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">timeout_c</span> <span class="o">=</span> <span class="n">TIS_SHORT_TIMEOUT</span><span class="p">;</span></div><div class='line' id='LC549'>	<span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">timeout_d</span> <span class="o">=</span> <span class="n">TIS_SHORT_TIMEOUT</span><span class="p">;</span></div><div class='line' id='LC550'><br/></div><div class='line' id='LC551'>	<span class="k">if</span> <span class="p">(</span><span class="n">request_locality</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="mi">0</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC552'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;request_locality() failed: %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">rc</span><span class="p">);</span></div><div class='line' id='LC553'>		<span class="n">rc</span> <span class="o">=</span> <span class="o">-</span><span class="n">ENODEV</span><span class="p">;</span></div><div class='line' id='LC554'>		<span class="k">goto</span> <span class="n">out_err</span><span class="p">;</span></div><div class='line' id='LC555'>	<span class="p">}</span></div><div class='line' id='LC556'><br/></div><div class='line' id='LC557'>	<span class="cm">/* Read four bytes from DID_VID register */</span></div><div class='line' id='LC558'>	<span class="k">if</span> <span class="p">(</span><span class="n">iic_tpm_read</span><span class="p">(</span><span class="n">TPM_DID_VID</span><span class="p">(</span><span class="mi">0</span><span class="p">),</span> <span class="p">(</span><span class="n">uchar</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">vendor</span><span class="p">,</span> <span class="mi">4</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC559'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;iic_tpm_read() failed: %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">rc</span><span class="p">);</span></div><div class='line' id='LC560'>		<span class="n">rc</span> <span class="o">=</span> <span class="o">-</span><span class="n">EIO</span><span class="p">;</span></div><div class='line' id='LC561'>		<span class="k">goto</span> <span class="n">out_release</span><span class="p">;</span></div><div class='line' id='LC562'>	<span class="p">}</span></div><div class='line' id='LC563'>	<span class="cm">/* Create DID_VID register value, after swapping to little-endian */</span></div><div class='line' id='LC564'>	<span class="n">vendor</span> <span class="o">=</span> <span class="n">be32_to_cpu</span><span class="p">(</span><span class="n">vendor</span><span class="p">);</span></div><div class='line' id='LC565'>	<span class="k">if</span> <span class="p">(</span><span class="n">vendor</span> <span class="o">!=</span> <span class="n">TPM_TIS_I2C_DID_VID</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC566'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;be32_to_cpu() failed: %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">rc</span><span class="p">);</span></div><div class='line' id='LC567'>		<span class="n">rc</span> <span class="o">=</span> <span class="o">-</span><span class="n">ENODEV</span><span class="p">;</span></div><div class='line' id='LC568'>		<span class="k">goto</span> <span class="n">out_release</span><span class="p">;</span></div><div class='line' id='LC569'>	<span class="p">}</span></div><div class='line' id='LC570'><br/></div><div class='line' id='LC571'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;1.2 TPM (device-id 0x%X)</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">vendor</span> <span class="o">&gt;&gt;</span> <span class="mi">16</span><span class="p">);</span></div><div class='line' id='LC572'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;Info: 0x%X</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">status</span><span class="p">);</span></div><div class='line' id='LC573'><br/></div><div class='line' id='LC574'>	<span class="cm">/*</span></div><div class='line' id='LC575'><span class="cm">	 * A timeout query to TPM can be placed here.</span></div><div class='line' id='LC576'><span class="cm">	 * Standard timeout values are used so far</span></div><div class='line' id='LC577'><span class="cm">	 */</span></div><div class='line' id='LC578'><br/></div><div class='line' id='LC579'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC580'><br/></div><div class='line' id='LC581'><span class="nl">out_release:</span></div><div class='line' id='LC582'>	<span class="n">release_locality</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC583'><br/></div><div class='line' id='LC584'><span class="nl">out_err:</span></div><div class='line' id='LC585'>	<span class="k">return</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC586'><span class="p">}</span></div><div class='line' id='LC587'><br/></div><div class='line' id='LC588'><span class="kt">void</span> <span class="nf">tpm_vendor_cleanup</span><span class="p">(</span><span class="k">struct</span> <span class="n">tpm_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">)</span></div><div class='line' id='LC589'><span class="p">{</span></div><div class='line' id='LC590'>	<span class="n">release_locality</span><span class="p">(</span><span class="n">chip</span><span class="p">,</span> <span class="n">chip</span><span class="o">-&gt;</span><span class="n">vendor</span><span class="p">.</span><span class="n">locality</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC591'><span class="p">}</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>

        <a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
        <div id="jump-to-line" style="display:none">
          <form accept-charset="UTF-8" class="js-jump-to-line-form">
            <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;">
            <button type="submit" class="button">Go</button>
          </form>
        </div>

      </div>
    </div>
</div>

<div id="js-frame-loading-template" class="frame frame-loading large-loading-area" style="display:none;">
  <img class="js-frame-loading-spinner" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif" height="64" width="64">
</div>


        </div>
      </div>
      <div class="modal-backdrop"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="/about">About us</a></dd>
        <dd><a href="/blog">Blog</a></dd>
        <dd><a href="/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2013 <span title="0.12085s from fe16.rs.github.com">GitHub</span>, Inc. All rights reserved.</p>
    <a class="left" href="/">
      <span class="mega-octicon octicon-mark-github"></span>
    </a>
    <ul id="legal">
        <li><a href="/site/terms">Terms of Service</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/tkastner/u-boot-rpi-gustl/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-remove-close close ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>

    
    <span id='server_response_time' data-time='0.12138' data-host='fe16'></span>
    
  </body>
</html>

