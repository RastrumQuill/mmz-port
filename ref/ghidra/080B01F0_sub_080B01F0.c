// sub_080B01F0 at 0x080B01F0 (thumb)

undefined4 sub_080B01F0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  int local_18 [2];
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
LAB_080b021c:
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      local_1c = *(int *)(param_1 + 0xc4) + 1;
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar2 & 0x7fffffff;
      local_20 = *(int *)(param_1 + 0x4c) + (uVar2 * 4 >> 0x12) + -0x2000;
      sub_08095D10(&local_20);
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x300;
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 1) == 0) {
      iVar3 = *(int *)(param_1 + 200);
    }
    else if ((bVar1 & 2) == 0) {
      iVar3 = *(int *)(param_1 + 200) + 0x100;
    }
    else {
      iVar3 = *(int *)(param_1 + 200) + -0x100;
    }
    *(int *)(param_1 + 0x4c) = iVar3;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if ((byte)(bVar1 - 1) != '\0') goto LAB_080b037a;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 200);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080b02be:
    if (*(int *)(param_1 + 0x58) < 0x700) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    }
    iVar3 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x50) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0xc0)) goto LAB_080b037a;
    sub_0800561C(param_1 + 0x74,&DAT_082b6a50);
    sub_0801412C(8,param_1 + 0x4c);
    sub_08001EAC(10);
    uVar2 = 0;
    do {
      sub_0808827C(3,local_18);
      local_18[0] = *(int *)(param_1 + 0x4c) + 0x1000;
      uVar4 = uVar2 * 0x10000 + 0x10000;
      uVar2 = uVar4 >> 0x10;
    } while ((int)uVar4 >> 0x10 < 4);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080b037a;
      *(undefined *)(param_1 + 0x12) = 0x3c;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_080b021c;
    }
    if (bVar1 == 2) goto LAB_080b02be;
    if (bVar1 != 3) goto LAB_080b037a;
  }
  uVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if ((0x9fff < uVar2) &&
     ((*(char *)(param_1 + 0x10) == '\0' ||
      (uVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c), 0xefff < uVar2)))) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
LAB_080b037a:
  sub_0809C980(param_1);
  return in_lr;
}

