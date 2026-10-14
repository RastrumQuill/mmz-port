// sub_08011D2C at 0x08011D2C (thumb)

undefined4 sub_08011D2C(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (DAT_0202f4a4 == '\x03') {
      *(undefined4 *)(param_1 + 0x50) = 0xffffff4c;
      cVar1 = '\x02';
      goto LAB_08011d92;
    }
    if (DAT_0202f4ac._1_1_ == '\0') {
      return in_lr;
    }
    sub_0800471C(0xe0);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar2 = *(short *)(param_1 + 0x10) + 1;
  *(ushort *)(param_1 + 0x10) = uVar2;
  *(uint *)(param_1 + 0x50) = -(uint)*(ushort *)(param_1 + 0x10);
  if (uVar2 < 0xb4) {
    return in_lr;
  }
  sub_08004768(0xe0);
  cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08011d92:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}

