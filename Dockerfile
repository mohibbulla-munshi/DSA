# Use an official PHP image with Apache
FROM php:8.0-apache

# Copy all files from local root directory to /var/www/html in the container
COPY . /var/www/html/

# Expose port 80
EXPOSE 80
