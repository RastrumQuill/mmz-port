// sub_08061030 at 0x08061030 (thumb)

undefined4 sub_08061030(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined auStack_14 [8];
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = DAT_020301b2 & 1;
  if ((DAT_020301b2 & 1) == 0) {
    uVar2 = sub_080C4924(auStack_14,0,param_1);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined *)(param_1 + 0xd) = 3;
    *(byte *)(param_1 + 0xe) = bVar1;
  }
  return in_lr;
}

