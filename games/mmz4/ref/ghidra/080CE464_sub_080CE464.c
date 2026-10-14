// sub_080CE464 at 0x080CE464 (thumb)

undefined4 sub_080CE464(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0xb9) == '\0') {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  if ((0 < *(int *)(param_1 + 0x60)) && (*(int *)(param_1 + 0xb4) == 0)) {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x58);
  }
  if (*(char *)(param_1 + 0xba) == '\0') {
    sub_080CE64C(param_1);
  }
  cVar1 = sub_080CE80C(param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  }
  uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (uVar3 < 0x4001) {
    if (*(byte *)(param_1 + 0x12) < 0x14) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      bVar2 = *(byte *)(param_1 + 10);
      bVar4 = bVar2 & 0xfb;
      *(byte *)(param_1 + 10) = bVar4;
      if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
        bVar2 = bVar2 & 0xfa;
      }
      else {
        bVar2 = bVar4 | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
    sub_0801CFF0(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

