// sub_0811ACFC at 0x0811ACFC (thumb)

undefined4 sub_0811ACFC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar10 = *(int *)(param_1 + 0x63a8);
  pbVar9 = (byte *)(param_1 + 0xde0);
  if ((4 < (byte)(*pbVar9 - 1)) && (cVar1 = sub_08117C68(param_1), cVar1 != '\0')) {
    return in_lr;
  }
  uVar3 = 0;
  if ((DAT_02000764 & 0x40) != 0) {
    *pbVar9 = (char)(*pbVar9 + 7) + (char)((int)(*pbVar9 + 7) >> 3) * -8;
    sub_08002B10(1);
  }
  if ((DAT_02000764 & 0x80) != 0) {
    iVar7 = *(byte *)(param_1 + 0xde0) + 1;
    *(byte *)(param_1 + 0xde0) = (char)iVar7 + (char)(iVar7 >> 3) * -8;
    uVar3 = 6;
    sub_08002B10(1);
  }
  switch(*(undefined *)(param_1 + 0xde0)) {
  case 0:
    if ((DAT_02000764 & 0x10) == 0) {
      if ((DAT_02000764 & 0x20) != 0) {
        bVar2 = sub_08128954(*(byte *)(iVar10 + 0xde) + 2,3);
        *(byte *)(iVar10 + 0xde) = bVar2;
        sub_08002B10(1);
      }
    }
    else {
      bVar2 = sub_08128954(*(byte *)(iVar10 + 0xde) + 1,3);
      *(byte *)(iVar10 + 0xde) = bVar2;
      sub_08002B10(1);
    }
    if (*(char *)(iVar10 + 0xde) == '\0') {
      *(undefined2 *)(iVar10 + 0x25c) = 1;
      *(undefined2 *)(iVar10 + 0x25e) = 0x200;
      *(undefined2 *)(iVar10 + 0x260) = 2;
      *(undefined2 *)(iVar10 + 0x262) = 0x100;
    }
    else {
      if (*(char *)(iVar10 + 0xde) != '\x01') {
        *(undefined2 *)(iVar10 + 0x25c) = *(undefined2 *)(iVar10 + 0xd4);
        *(undefined2 *)(iVar10 + 0x25e) = *(undefined2 *)(iVar10 + 0xd6);
        *(undefined2 *)(iVar10 + 0x260) = *(undefined2 *)(iVar10 + 0xd8);
        *(undefined2 *)(iVar10 + 0x262) = *(undefined2 *)(iVar10 + 0xda);
        uVar4 = *(undefined2 *)(iVar10 + 0xdc);
        goto LAB_0811af4a;
      }
      *(undefined2 *)(iVar10 + 0x25c) = 1;
      *(undefined2 *)(iVar10 + 0x25e) = 0x100;
      *(undefined2 *)(iVar10 + 0x260) = 2;
      *(undefined2 *)(iVar10 + 0x262) = 0x200;
    }
    *(undefined2 *)(iVar10 + 0x264) = 4;
    break;
  case 1:
    uVar6 = (ushort)*(byte *)(iVar10 + 0xde);
    if (*(byte *)(iVar10 + 0xde) == 2) {
      uVar4 = *(undefined2 *)(iVar10 + 0xd8);
      if ((DAT_02000764 & 1) == 0) {
        if ((((DAT_02000764 & 2) != 0) || (uVar6 = 0x100, (DAT_02000764 & 0x100) != 0)) ||
           (uVar6 = 0x200, (DAT_02000764 & 0x200) != 0)) {
          *(ushort *)(iVar10 + 0xd8) = uVar6;
          goto LAB_0811aee6;
        }
        if ((DAT_02000764 & 4) != 0) {
          *(undefined2 *)(iVar10 + 0xd8) = 4;
          sub_08002B10(2);
        }
      }
      else {
        *(undefined2 *)(iVar10 + 0xd8) = 1;
LAB_0811aee6:
        sub_08002B10(2);
      }
      if (*(short *)(iVar10 + 0xd4) == *(short *)(iVar10 + 0xd8)) {
        *(undefined2 *)(iVar10 + 0xd4) = uVar4;
      }
      sVar5 = *(short *)(iVar10 + 0xd8);
      if (*(short *)(iVar10 + 0xd6) == sVar5) {
        *(undefined2 *)(iVar10 + 0xd6) = uVar4;
      }
      if (*(short *)(iVar10 + 0xda) == sVar5) {
        *(undefined2 *)(iVar10 + 0xda) = uVar4;
      }
      if (*(short *)(iVar10 + 0xdc) == sVar5) {
        *(undefined2 *)(iVar10 + 0xdc) = uVar4;
      }
      *(undefined2 *)(iVar10 + 0x25c) = *(undefined2 *)(iVar10 + 0xd4);
      *(undefined2 *)(iVar10 + 0x25e) = *(undefined2 *)(iVar10 + 0xd6);
      *(undefined2 *)(iVar10 + 0x260) = *(undefined2 *)(iVar10 + 0xd8);
      *(undefined2 *)(iVar10 + 0x262) = *(undefined2 *)(iVar10 + 0xda);
      uVar4 = *(undefined2 *)(iVar10 + 0xdc);
LAB_0811af4a:
      *(undefined2 *)(iVar10 + 0x264) = uVar4;
    }
    else {
      *(undefined *)(param_1 + 0xde0) = uVar3;
    }
    break;
  case 2:
    uVar6 = (ushort)*(byte *)(iVar10 + 0xde);
    if (*(byte *)(iVar10 + 0xde) != 2) {
LAB_0811b1bc:
      *(undefined *)(param_1 + 0xde0) = uVar3;
      break;
    }
    uVar4 = *(undefined2 *)(iVar10 + 0xd4);
    if ((DAT_02000764 & 1) == 0) {
      if ((((DAT_02000764 & 2) != 0) || (uVar6 = 0x100, (DAT_02000764 & 0x100) != 0)) ||
         (uVar6 = 0x200, (DAT_02000764 & 0x200) != 0)) {
        *(ushort *)(iVar10 + 0xd4) = uVar6;
        goto LAB_0811afaa;
      }
      if ((DAT_02000764 & 4) != 0) {
        *(undefined2 *)(iVar10 + 0xd4) = 4;
        sub_08002B10(2);
      }
    }
    else {
      *(undefined2 *)(iVar10 + 0xd4) = 1;
LAB_0811afaa:
      sub_08002B10(2);
    }
    if (*(short *)(iVar10 + 0xd6) == *(short *)(iVar10 + 0xd4)) {
      *(undefined2 *)(iVar10 + 0xd6) = uVar4;
    }
    sVar5 = *(short *)(iVar10 + 0xd4);
    if (*(short *)(iVar10 + 0xd8) == sVar5) {
      *(undefined2 *)(iVar10 + 0xd8) = uVar4;
    }
    if (*(short *)(iVar10 + 0xda) == sVar5) {
      *(undefined2 *)(iVar10 + 0xda) = uVar4;
    }
    if (*(short *)(iVar10 + 0xdc) == sVar5) {
      *(undefined2 *)(iVar10 + 0xdc) = uVar4;
    }
    *(short *)(iVar10 + 0x25c) = sVar5;
    goto LAB_0811b194;
  case 3:
    uVar6 = (ushort)*(byte *)(iVar10 + 0xde);
    if (*(byte *)(iVar10 + 0xde) != 2) goto LAB_0811b1bc;
    uVar4 = *(undefined2 *)(iVar10 + 0xd6);
    if ((DAT_02000764 & 1) == 0) {
      if ((((DAT_02000764 & 2) != 0) || (uVar6 = 0x100, (DAT_02000764 & 0x100) != 0)) ||
         (uVar6 = 0x200, (DAT_02000764 & 0x200) != 0)) {
        *(ushort *)(iVar10 + 0xd6) = uVar6;
        goto LAB_0811b03e;
      }
      if ((DAT_02000764 & 4) != 0) {
        *(undefined2 *)(iVar10 + 0xd6) = 4;
        sub_08002B10(2);
      }
    }
    else {
      *(undefined2 *)(iVar10 + 0xd6) = 1;
LAB_0811b03e:
      sub_08002B10(2);
    }
    if (*(short *)(iVar10 + 0xd4) == *(short *)(iVar10 + 0xd6)) {
      *(undefined2 *)(iVar10 + 0xd4) = uVar4;
    }
    sVar5 = *(short *)(iVar10 + 0xd6);
    if (*(short *)(iVar10 + 0xd8) == sVar5) {
      *(undefined2 *)(iVar10 + 0xd8) = uVar4;
    }
    if (*(short *)(iVar10 + 0xda) == sVar5) {
      *(undefined2 *)(iVar10 + 0xda) = uVar4;
    }
    goto LAB_0811b074;
  case 4:
    uVar6 = (ushort)*(byte *)(iVar10 + 0xde);
    if (*(byte *)(iVar10 + 0xde) != 2) goto LAB_0811b1bc;
    uVar4 = *(undefined2 *)(iVar10 + 0xda);
    if ((DAT_02000764 & 1) == 0) {
      if ((((DAT_02000764 & 2) != 0) || (uVar6 = 0x100, (DAT_02000764 & 0x100) != 0)) ||
         (uVar6 = 0x200, (DAT_02000764 & 0x200) != 0)) {
        *(ushort *)(iVar10 + 0xda) = uVar6;
        goto LAB_0811b0ca;
      }
      if ((DAT_02000764 & 4) != 0) {
        *(undefined2 *)(iVar10 + 0xda) = 4;
        sub_08002B10(2);
      }
    }
    else {
      *(undefined2 *)(iVar10 + 0xda) = 1;
LAB_0811b0ca:
      sub_08002B10(2);
    }
    if (*(short *)(iVar10 + 0xd4) == *(short *)(iVar10 + 0xda)) {
      *(undefined2 *)(iVar10 + 0xd4) = uVar4;
    }
    sVar5 = *(short *)(iVar10 + 0xda);
    if (*(short *)(iVar10 + 0xd6) == sVar5) {
      *(undefined2 *)(iVar10 + 0xd6) = uVar4;
    }
    if (*(short *)(iVar10 + 0xd8) == sVar5) {
      *(undefined2 *)(iVar10 + 0xd8) = uVar4;
    }
LAB_0811b074:
    if (*(short *)(iVar10 + 0xdc) == sVar5) {
      *(undefined2 *)(iVar10 + 0xdc) = uVar4;
    }
LAB_0811b18a:
    *(undefined2 *)(iVar10 + 0x25c) = *(undefined2 *)(iVar10 + 0xd4);
LAB_0811b194:
    *(undefined2 *)(iVar10 + 0x25e) = *(undefined2 *)(iVar10 + 0xd6);
    *(undefined2 *)(iVar10 + 0x260) = *(undefined2 *)(iVar10 + 0xd8);
    *(undefined2 *)(iVar10 + 0x262) = *(undefined2 *)(iVar10 + 0xda);
    *(undefined2 *)(iVar10 + 0x264) = *(undefined2 *)(iVar10 + 0xdc);
    break;
  case 5:
    uVar6 = (ushort)*(byte *)(iVar10 + 0xde);
    if (*(byte *)(iVar10 + 0xde) != 2) goto LAB_0811b1bc;
    uVar4 = *(undefined2 *)(iVar10 + 0xdc);
    if ((DAT_02000764 & 1) == 0) {
      if ((((DAT_02000764 & 2) != 0) || (uVar6 = 0x100, (DAT_02000764 & 0x100) != 0)) ||
         (uVar6 = 0x200, (DAT_02000764 & 0x200) != 0)) {
        *(ushort *)(iVar10 + 0xdc) = uVar6;
        goto LAB_0811b14a;
      }
      if ((DAT_02000764 & 4) != 0) {
        *(undefined2 *)(iVar10 + 0xdc) = 4;
        sub_08002B10(2);
      }
    }
    else {
      *(undefined2 *)(iVar10 + 0xdc) = 1;
LAB_0811b14a:
      sub_08002B10(2);
    }
    if (*(short *)(iVar10 + 0xd4) == *(short *)(iVar10 + 0xdc)) {
      *(undefined2 *)(iVar10 + 0xd4) = uVar4;
    }
    sVar5 = *(short *)(iVar10 + 0xdc);
    if (*(short *)(iVar10 + 0xd6) == sVar5) {
      *(undefined2 *)(iVar10 + 0xd6) = uVar4;
    }
    if (*(short *)(iVar10 + 0xd8) == sVar5) {
      *(undefined2 *)(iVar10 + 0xd8) = uVar4;
    }
    if (*(short *)(iVar10 + 0xda) == sVar5) {
      *(undefined2 *)(iVar10 + 0xda) = uVar4;
    }
    goto LAB_0811b18a;
  case 6:
    if ((DAT_02000764 & 0x10) == 0) {
      if ((DAT_02000764 & 0x20) == 0) break;
      iVar7 = *(byte *)(iVar10 + 0xdf) + 2;
    }
    else {
      iVar7 = *(byte *)(iVar10 + 0xdf) + 1;
    }
    uVar3 = sub_08128954(iVar7,3);
    *(undefined *)(iVar10 + 0xdf) = uVar3;
    sub_08002B10(1);
    break;
  case 7:
    if ((DAT_02000764 & 0x30) != 0) {
      *(byte *)(iVar10 + 0xe1) = *(byte *)(iVar10 + 0xe1) + 1 & 1;
      sub_08002B10(1);
    }
  }
  if (*(byte *)(param_1 + 0xde0) < 6) {
    uVar8 = 0x16;
  }
  else {
    if (*(byte *)(param_1 + 0xde0) != 6) {
      sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x25,0,0);
      goto LAB_0811b27a;
    }
    uVar8 = 0x24;
  }
  sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,uVar8,0,0);
LAB_0811b27a:
  sub_0811B3E4(param_1,param_1 + 0xed8);
  sub_080025D8(0x33);
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  return in_lr;
}

