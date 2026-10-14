// sub_0811EC98 at 0x0811EC98 (thumb)

undefined4 sub_0811EC98(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x63a8);
  uVar7 = 5;
  if ((*(char *)(iVar4 + 199) != '\x03') && (uVar7 = 7, *(char *)(iVar4 + 199) == '\x01')) {
    uVar7 = 0;
  }
  pbVar6 = (byte *)(iVar4 + 0xf0);
  if (*(char *)(param_1 + 3) == '\0') {
    if (*pbVar6 < uVar7) {
      if (*(ushort *)(iVar4 + 0xba) < *(ushort *)(&DAT_08886198 + (uint)*pbVar6 * 2)) {
        sub_08002B10(4);
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      sub_08002B10(4);
      uVar3 = 1;
    }
    *(undefined *)(param_1 + 3) = uVar3;
  }
  if (*pbVar6 < uVar7) {
    sub_08117D68(*(undefined2 *)(&DAT_08886198 + (uint)*pbVar6 * 2),0x1c,0xd);
    sub_08117D68(*(undefined2 *)(iVar4 + 0xba),0x1c,0xf);
  }
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == '\x01') {
    if (*pbVar6 < uVar7) {
      sub_0810D214(&DAT_0886af9e,0x11,7);
    }
    else {
      sub_0810D214("\r%2238",0x11,7);
    }
    if ((DAT_02000764 & 3) != 0) {
LAB_0811ee3a:
      *(undefined *)(param_1 + 2) = 0;
      *(undefined *)(param_1 + 3) = 0;
      return in_lr;
    }
    goto LAB_0811eeb0;
  }
  bVar2 = (byte)DAT_02000764 & 1;
  if ((DAT_02000764 & 1) != 0) {
    if (cVar1 == '\x03') {
      sub_08002B10(3);
    }
    else {
      iVar5 = param_1 + 0xdd0;
      sub_0810B0C0(param_1,iVar5,1,*pbVar6);
      sub_0810B0C0(param_1,iVar5,1,*pbVar6 | 0x10);
      sub_0810B0C0(param_1,iVar5,1,*pbVar6 | 0x20);
      *(short *)(iVar4 + 0xba) =
           *(short *)(iVar4 + 0xba) - *(short *)(&DAT_08886198 + (uint)*pbVar6 * 2);
      *pbVar6 = *pbVar6 + 1;
      *(undefined *)(iVar4 + 0xf6) = 2;
      sub_080027B8(param_1 + 0x16d8,&DAT_08b2c000,*pbVar6 + 0x68,0,0);
      sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
      sub_08002B10(0x28);
    }
    goto LAB_0811ee3a;
  }
  if ((DAT_02000764 & 2) != 0) {
    sub_08002B10(3);
    *(byte *)(param_1 + 2) = bVar2;
    *(byte *)(param_1 + 3) = bVar2;
    return in_lr;
  }
  if ((DAT_02000766 & 0x80) == 0) {
    if (((DAT_02000766 & 0x40) != 0) && (cVar1 == '\x03')) {
      sub_08002B10(1);
      uVar3 = 2;
      goto LAB_0811ee98;
    }
  }
  else if (cVar1 == '\x02') {
    sub_08002B10(1);
    uVar3 = 3;
LAB_0811ee98:
    *(undefined *)(param_1 + 3) = uVar3;
  }
  sub_0810D214(&DAT_0886af79,0x11,7);
LAB_0811eeb0:
  sub_0810D214(&DAT_0886afdc,1,0x12);
  return in_lr;
}

