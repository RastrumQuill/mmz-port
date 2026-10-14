// sub_080A098C at 0x080A098C (thumb)

undefined4 sub_080A098C(int param_1)

{
  undefined4 in_lr;
  
  sub_08001EE8((int)*(short *)(param_1 + 0xc4));
  *(short *)(param_1 + 0xc4) = -1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_0809C6A4(param_1);
  return in_lr;
}

