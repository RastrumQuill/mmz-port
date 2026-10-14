// sub_0806271C at 0x0806271C (thumb)

undefined4 sub_0806271C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        *(undefined *)(param_1 + 0x12) = 0x32;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        bVar2 = *(byte *)(param_1 + 0xc2) + 1;
        *(byte *)(param_1 + 0xc2) = bVar2;
        if (bVar2 < 2) {
          uVar3 = 2;
        }
        else {
          uVar3 = 1;
        }
        *(undefined *)(param_1 + 0xd) = uVar3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x04';
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 200);
      iVar5 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)] * 0x280;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 200) + (iVar5 >> 8);
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_080032EC(0x95);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_18 = (uVar4 * 0x40 >> 0x16) +
               *(int *)(param_1 + 0x54) + (uint)*(byte *)(param_1 + 0x10) * 0x4800 + -0x2600;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    local_14 = (uVar4 * 8 >> 0x13) + *(int *)(param_1 + 0x58) + -0x1000;
    sub_080A8B08(param_1,&local_18);
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x04';
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 200);
  iVar5 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)] * 0x280;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 200) + (iVar5 >> 8);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}

