// sub_08031F74 at 0x08031F74 (thumb)

undefined4 sub_08031F74(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x156);
  if (bVar1 == 1) {
    uVar3 = 0x280c;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_08031fc0;
    uVar3 = 0x280d;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        sub_0801CF00(param_1,0x280b);
      }
      goto LAB_08031fc0;
    }
    uVar3 = 0x280e;
  }
  sub_0801CF00(param_1,uVar3);
LAB_08031fc0:
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  sVar2 = sub_080386E0(param_1);
  *(int *)(param_1 + 0x5c) = (int)sVar2;
  sub_08002B10(0xd);
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08031FF8(param_1);
  return in_lr;
}

