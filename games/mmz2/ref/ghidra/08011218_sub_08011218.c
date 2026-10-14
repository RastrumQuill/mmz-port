// sub_08011218 at 0x08011218 (thumb)

undefined4 sub_08011218(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08002D68(0x45,0);
    sub_08002D68(0x4a,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08002EA0(0x45);
  sub_08002EA0(0x4a);
  return in_lr;
}

