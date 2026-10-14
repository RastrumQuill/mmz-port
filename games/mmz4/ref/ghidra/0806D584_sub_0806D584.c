// sub_0806D584 at 0x0806D584 (thumb)

undefined4 sub_0806D584(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_0801CFF0(param_1);
  bVar1 = (byte)DAT_0202e918;
  if (((DAT_0202e918 & 8) == 0) &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(byte *)(param_1 + 0xe) = bVar1 & 8;
  }
  return in_lr;
}

