Stanford Handbook
========================

Robust, generalized Drupal Features module for creating policy handbooks

## Post-Install Manual Configuration
There are a few manual configuration steps to do upon installing this module:

* Configure the `print` and `print_ui` module (permissions, blocks, and link text)
* Add taxonomy terms to the "Category(ies)" vocabulary
* Create a menu for each handbook and place it in the first sidebar
* Add Chapter and Subchapter nodes to that menu as you are creating content
* Create Menu Position rules under each subchapter for Handbook Page nodes

## Classes and Styling
Add the following classes to the following blocks to take advantage of built-in styles (the `block_class` module is recommended):

* `.well`: Print, Authority, Related Pages, Related Categories blocks
*  `.stanford-handbook-pager`: Handbook Pager block 