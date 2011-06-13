Created by Mark Schulte to allow simple buying of files through drupal.

My first module, so it may take awhile to get things going. However, 
currently, through drupal using lm_paypal, you can:
 * Set files (all or just a subdirectory) to purchasable.
 * Allow some roles to download all files without paying.
 * Force users to pay through paypal to download a file

For know you must use Private Download (not required if private 
files) and lm_paypal.
To make it work perfectly, you should disable caching for private downloads.
"Cache-Control: no-store, no-cache, must-revalidate" in private headers




