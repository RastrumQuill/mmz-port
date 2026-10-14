// sub_08079168 at 0x08079168 (thumb)

undefined4 sub_08079168(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = (byte)DAT_0202e918 & 8;
  if ((DAT_0202e918 & 8) == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1;
    *(byte *)(param_1 + 0xf) = bVar1;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

