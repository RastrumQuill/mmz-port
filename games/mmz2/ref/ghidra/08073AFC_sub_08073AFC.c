// sub_08073AFC at 0x08073AFC (thumb)

undefined4 sub_08073AFC(int param_1)

{
  short sVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  puVar4 = &local_10;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined *)(param_1 + 0x12) = 0x10;
      bVar3 = *(byte *)(param_1 + 0x11);
    }
    else {
      bVar3 = *(byte *)(param_1 + 0x11);
      if (bVar3 < 2) {
        *(undefined *)(param_1 + 0x12) = 0;
      }
      else {
        *(undefined *)(param_1 + 0x12) = 0x20;
      }
    }
    if (bVar3 != 0) {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\b';
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar3 = *(byte *)(param_1 + 0x12);
    if ((bVar3 & 3) == 0) {
      iVar2 = *(int *)(param_1 + 0x58) + 0x80;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x58) + -0x80;
    }
    *(int *)(param_1 + 0x58) = iVar2;
    *(byte *)(param_1 + 0x12) = bVar3 - 1;
    if (bVar3 == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    iVar2 = *(int *)(param_1 + 0x58) + iVar2;
    *(int *)(param_1 + 0x58) = iVar2;
    if (*(char *)(param_1 + 0x10) == '\0') {
      sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar2 + -0x3000);
      if (sVar1 == 0) {
        return in_lr;
      }
      local_10 = *(undefined4 *)(param_1 + 0x54);
      local_c = *(int *)(param_1 + 0x58) + -0x3000;
    }
    else {
      sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
      if (sVar1 == 0) {
        return in_lr;
      }
      puVar4 = (undefined4 *)(param_1 + 0x54);
    }
    sub_080AC60C(1,puVar4);
    sub_080032EC(0x2a);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

