core = 7.x
api = 2

projects[custom_pagers][type] = "module"
projects[custom_pagers][subdir] = "contrib"
projects[custom_pagers][download][type] = "git"
projects[custom_pagers][download][url] = "http://git.drupal.org/project/custom_pagers.git"
projects[custom_pagers][download][revision] = "dcc774741f5152a8c6a10d21a70399d77794cfa2"

; https://www.drupal.org/node/1288368 | Change to Views API breaks Custom Pagers display
projects[custom_pagers][patch][] = "https://drupal.org/files/custom_pagers-api_update-1288368-90.patch"

; https://www.drupal.org/node/1346194 | Invalid index value in function pager_entries_by_key
projects[custom_pagers][patch][] = "https://drupal.org/files/custom_pagers-1346194.patch"
