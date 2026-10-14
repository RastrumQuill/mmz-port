// sub_08018408 at 0x08018408 (thumb)

undefined4 sub_08018408(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_0801846C();
  }
  else {
    sub_08018420();
  }
  return in_lr;
}

