// sub_08091EF4 at 0x08091EF4 (thumb)

undefined4 sub_08091EF4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    return in_lr;
  }
  iVar6 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar6 + 0xbd) != '\0') {
    return in_lr;
  }
  *(char *)(iVar6 + 0xbd) = '\x01';
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  *(bool *)(iVar6 + 0x13) = *(int *)(iVar6 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
  iVar1 = DAT_0202e130;
  if (*(char *)(iVar4 + 8) == '\x01') {
    switch(*(char *)(iVar4 + 9)) {
    case '\x01':
    case '\f':
    case '\r':
    case '\x0e':
    case '\x0f':
      *(uint *)(iVar6 + 0x5c) = ((uint)*(byte *)(iVar6 + 0x13) * -2 + 1) * 0x400;
      *(undefined4 *)(iVar6 + 0x60) = 0;
      goto LAB_08092122;
    case '\x02':
    case '\n':
      iVar2 = *(int *)(iVar4 + 0x5c);
      iVar4 = *(int *)(iVar4 + 0x60);
      if ((iVar2 == 0) && (iVar4 == 0)) {
        if (DAT_0202e130 == 0) {
          uVar5 = 0xfffffc00;
          if (iRam00000054 < *(int *)(iVar6 + 0x54)) {
            uVar5 = 0x3fc00;
          }
          *(undefined4 *)(iVar6 + 0x5c) = uVar5;
          *(undefined4 *)(iVar6 + 0x60) = 0;
          goto LAB_08092122;
        }
        iVar2 = sub_0801EFE8(DAT_0202e130,0);
        iVar4 = sub_0801F004(iVar1,0);
        iVar2 = *(int *)(iVar6 + 0x54) - iVar2;
        iVar4 = *(int *)(iVar6 + 0x58) - iVar4;
      }
      break;
    case '\x03':
    case '\x05':
    case '\b':
    case '\v':
      if (DAT_0202e130 == 0) {
LAB_08092090:
        uVar5 = 0xfffffc00;
        if (*(int *)(DAT_0202e130 + 0x54) < *(int *)(iVar6 + 0x54)) {
          uVar5 = 0x3fc00;
        }
        *(undefined4 *)(iVar6 + 0x5c) = uVar5;
        *(int *)(iVar6 + 0x60) = iVar1;
        goto LAB_08092122;
      }
      iVar2 = sub_0801EFE8(DAT_0202e130,2);
      iVar4 = sub_0801F004(iVar1,2);
      iVar2 = *(int *)(iVar6 + 0x54) - iVar2;
      iVar4 = *(int *)(iVar6 + 0x58) - iVar4;
      break;
    case '\x04':
      if (DAT_0202e130 == 0) goto LAB_08092090;
      iVar2 = sub_0801EFE8(DAT_0202e130,1);
      iVar4 = sub_0801F004(iVar1,1);
      iVar2 = *(int *)(iVar6 + 0x54) - iVar2;
      iVar4 = *(int *)(iVar6 + 0x58) - iVar4;
      break;
    case '\x06':
    case '\a':
      if (DAT_0202e130 == 0) goto LAB_08092090;
      iVar2 = sub_0801EFE8(DAT_0202e130,0);
      iVar4 = sub_0801F004(iVar1,0);
      iVar2 = *(int *)(iVar6 + 0x54) - iVar2;
      iVar4 = *(int *)(iVar6 + 0x58) - iVar4;
      break;
    default:
      *(undefined4 *)(iVar6 + 0xc) = 2;
      *(undefined4 *)(iVar6 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar6 + 9) * 4) + 8);
LAB_080920bc:
      *(undefined *)(iVar6 + 0xd) = 0;
      sub_080918C4(iVar6);
      return in_lr;
    }
  }
  else {
    if (*(char *)(iVar4 + 8) != '\x04') {
      *(undefined4 *)(iVar6 + 0xc) = 2;
      *(undefined4 *)(iVar6 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar6 + 9) * 4) + 8);
      goto LAB_080920bc;
    }
    if (*(char *)(iVar4 + 9) != '\0') {
      return in_lr;
    }
    iVar2 = *(int *)(iVar4 + 0x5c);
    iVar4 = *(int *)(iVar4 + 0x60);
    if ((iVar2 == 0) && (iVar4 == 0)) {
      uVar5 = 0xfffffc00;
      if (*(int *)(DAT_0202e130 + 0x54) < *(int *)(iVar6 + 0x54)) {
        uVar5 = 0x3fc00;
      }
      *(undefined4 *)(iVar6 + 0x5c) = uVar5;
      *(undefined4 *)(iVar6 + 0x60) = 0;
      goto LAB_08092122;
    }
  }
  uVar3 = sub_08038E6C(iVar2,iVar4);
  *(int *)(iVar6 + 0x5c) = (int)(short)(&DAT_080ef450)[(uVar3 & 0xff) + 0x40 & 0xff] << 2;
  *(int *)(iVar6 + 0x60) = (int)(short)(&DAT_080ef450)[uVar3 & 0xff] << 2;
LAB_08092122:
  *(undefined *)(iVar6 + 0xd) = 2;
  *(undefined *)(iVar6 + 0xe) = 0;
  return in_lr;
}

