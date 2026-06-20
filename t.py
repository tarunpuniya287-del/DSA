import kagglehub

# Download latest version
path = kagglehub.dataset_download("tanayatipre/store-sales-forecasting-dataset")

print("Path to dataset files:", path)