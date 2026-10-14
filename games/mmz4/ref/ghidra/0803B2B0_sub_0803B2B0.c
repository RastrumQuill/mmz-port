// sub_0803B2B0 at 0x0803B2B0 (thumb)

undefined8 sub_0803B2B0(int param_1,int param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed88);
  if (iVar2 == 0) goto LAB_0803b446;
  iVar3 = (int)-(uint)*(byte *)(param_1 + 0xf8) >> 0x1f;
  iVar6 = -iVar3;
  if (param_3 == '\0') {
    *(undefined *)(iVar2 + 9) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0x803b455;
    if (iVar3 < -1) {
      bVar1 = *(byte *)(iVar2 + 0xb) | 0x40;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 0xb) & 0xbf;
    }
    *(byte *)(iVar2 + 0xb) = bVar1;
    *(undefined *)(iVar2 + 0x25) = 0x10;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = (&DAT_088501c8)[iVar6];
LAB_0803b37c:
    sub_0803A8E0(iVar6,0,0);
  }
  else {
    *(undefined *)(iVar2 + 9) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0x803b455;
    if (iVar3 < -1) {
      bVar1 = *(byte *)(iVar2 + 0xb) | 0x40;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 0xb) & 0xbf;
    }
    *(byte *)(iVar2 + 0xb) = bVar1;
    *(undefined *)(iVar2 + 0x25) = 0x10;
    *(undefined2 *)(iVar2 + 0x20) = (&DAT_088501c0)[-iVar3];
    *(undefined1 *)(iVar2 + 0x22) = (&DAT_088501c8)[iVar6];
    if (param_3 == '\x01') goto LAB_0803b37c;
    if (param_3 == '\x02') {
      uVar4 = 0;
LAB_0803b3b6:
      sub_0803A8E0(iVar6,uVar4,1);
    }
    else {
      if (param_3 == '\x03') {
        uVar4 = 0;
        goto LAB_0803b3b6;
      }
      if (param_3 == '\x04') {
        uVar4 = 2;
        goto LAB_0803b3b6;
      }
      if (param_3 == '\x05') {
        uVar4 = 3;
        goto LAB_0803b3b6;
      }
      if (param_3 == '\x06') {
        sub_0803A8E0(iVar6,0,1);
      }
    }
  }
  *(int *)(iVar2 + 0xb4) = param_1;
  *(int *)(iVar2 + 0x2c) = param_2;
  if ((*(byte *)(param_2 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_2 + 0x54);
    iVar6 = -0xc00;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x54);
    iVar6 = 0xc00;
  }
  *(int *)(iVar2 + 0x54) = iVar3 + iVar6;
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(char *)(iVar2 + 0x10) = param_3;
  *(undefined *)(iVar2 + 0x11) = 0;
  bVar1 = *(byte *)(param_2 + 10) >> 4;
  uVar5 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(iVar2 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 10) | 0x10;
  }
  *(byte *)(iVar2 + 10) = bVar1;
  *(char *)(iVar2 + 0x4c) = (char)uVar5;
  *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  *(undefined *)(iVar2 + 0xc1) = *(undefined *)(param_1 + 0xc2);
LAB_0803b446:
  return CONCAT44(in_lr,iVar2);
}

