// sub_0803F17C at 0x0803F17C (thumb)

undefined4 sub_0803F17C(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0xc4) = 0;
    uVar1 = sub_0809EA8C(param_1,2);
    *(undefined4 *)(param_1 + 0xc4) = uVar1;
    sub_08017700(param_1,*(ushort *)(param_1 + 200) | 0xa200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar2 = DAT_020301b2 & 1;
  if ((DAT_020301b2 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(byte *)(param_1 + 0xe) = bVar2;
  }
  sub_080177F4(param_1);
  return in_lr;
}

