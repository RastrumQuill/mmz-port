// sub_080374DC at 0x080374DC (thumb)

undefined4 sub_080374DC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  cVar2 = sub_08038B7C();
  if (cVar2 != '\0') {
    *(undefined *)(param_1 + 0xf) = 2;
    bVar1 = *(byte *)(param_1 + 0xbb);
    *(uint *)(param_1 + 0x58) = (bVar1 + 1) * -0x40;
    *(byte *)(param_1 + 0xbb) = bVar1 + 8;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08037518(param_1);
  }
  return in_lr;
}

