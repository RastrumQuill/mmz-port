// sub_08096BF4 at 0x08096BF4 (thumb)

undefined4 sub_08096BF4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    return in_lr;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar1 = sub_08065A68(*(byte *)(iVar4 + 0xb) >> 6 & 1);
  *(bool *)(iVar5 + 0x13) = *(int *)(iVar5 + 0x54) < *(int *)(iVar1 + 0x54);
  switch(*(undefined *)(iVar4 + 9)) {
  case 1:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    *(uint *)(iVar5 + 0x5c) = ((uint)*(byte *)(iVar5 + 0x13) * -2 + 1) * 0x400;
    *(undefined4 *)(iVar5 + 0x60) = 0;
    goto LAB_08096d88;
  case 2:
  case 10:
    iVar2 = *(int *)(iVar4 + 0x5c);
    iVar4 = *(int *)(iVar4 + 0x60);
    if ((iVar2 == 0) && (iVar4 == 0)) {
      if (iVar1 == 0) goto LAB_08096d5c;
      iVar2 = sub_0801EFE8(iVar1,0);
      iVar1 = sub_0801F004(iVar1,0);
      iVar2 = *(int *)(iVar5 + 0x54) - iVar2;
      iVar4 = *(int *)(iVar5 + 0x58);
      goto LAB_08096d2a;
    }
    break;
  case 3:
  case 5:
  case 8:
  case 0xb:
    if (iVar1 == 0) {
LAB_08096d5c:
      *(undefined4 *)(iVar5 + 0x5c) = 0x400;
      *(int *)(iVar5 + 0x60) = iVar1;
      goto LAB_08096d88;
    }
    iVar2 = sub_0801EFE8(iVar1,2);
    iVar4 = sub_0801F004(iVar1,2);
    iVar2 = *(int *)(iVar5 + 0x54) - iVar2;
    iVar4 = *(int *)(iVar5 + 0x58) - iVar4;
    break;
  case 4:
    if (iVar1 == 0) goto LAB_08096d5c;
    iVar2 = sub_0801EFE8(iVar1,1);
    iVar1 = sub_0801F004(iVar1,1);
    iVar2 = *(int *)(iVar5 + 0x54) - iVar2;
    iVar4 = *(int *)(iVar5 + 0x58);
    goto LAB_08096d2a;
  case 6:
  case 7:
    if (iVar1 == 0) goto LAB_08096d5c;
    iVar2 = sub_0801EFE8(iVar1,1);
    iVar1 = sub_0801F004(iVar1,1);
    iVar2 = *(int *)(iVar5 + 0x54) - iVar2;
    iVar4 = *(int *)(iVar5 + 0x58);
LAB_08096d2a:
    iVar4 = iVar4 - iVar1;
    break;
  default:
    *(undefined4 *)(iVar5 + 0xc) = 2;
    *(undefined4 *)(iVar5 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar5 + 9) * 4) + 8);
    *(undefined *)(iVar5 + 0xd) = 0;
    sub_0809648C(iVar5);
    return in_lr;
  }
  uVar3 = sub_08038E6C(iVar2,iVar4);
  *(int *)(iVar5 + 0x5c) = (int)(short)(&DAT_080ef450)[(uVar3 & 0xff) + 0x40 & 0xff] << 2;
  *(int *)(iVar5 + 0x60) = (int)(short)(&DAT_080ef450)[uVar3 & 0xff] << 2;
LAB_08096d88:
  *(undefined *)(iVar5 + 0xd) = 2;
  *(undefined *)(iVar5 + 0xe) = 0;
  return in_lr;
}

