// sub_080D8700 at 0x080D8700 (thumb)

undefined4 sub_080D8700(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  sub_080D62C4(*(undefined4 *)(param_1 + 0x28),param_1 + 0xb4,&local_20,2,0,0xfffff400);
  iVar5 = *(int *)(param_1 + 0x5c);
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = iVar5 + 7;
  }
  iVar2 = (iVar5 * ((iVar2 >> 3) + 1)) / 2;
  if ((((uint)(iVar2 * 2) < (uint)(local_20 + iVar2)) ||
      ((uint)(iVar2 * 2) < (uint)(local_1c + iVar2))) ||
     (iVar3 = local_20 * local_20 + local_1c * local_1c, iVar2 * iVar2 < iVar3)) {
    iVar7 = 8;
    iVar3 = iVar2;
  }
  else {
    iVar7 = -8;
  }
  bVar1 = sub_08038E6C(local_20,local_1c);
  pbVar4 = (byte *)(param_1 + 0xc4);
  if ((byte)((bVar1 - *pbVar4) + 0x3f) < 0x7f) {
    if ((iVar7 < 0) && (iVar3 <= iVar5 * iVar5)) {
      sub_080D5430(param_1,param_1 + 0xb4,param_1 + 0x5c,pbVar4,2,0,0xfffff400);
      return in_lr;
    }
  }
  else if (0 < iVar5) {
    iVar7 = -8;
    bVar1 = *pbVar4;
  }
  *pbVar4 = bVar1;
  if (0 < iVar5) {
    *(int *)(param_1 + 0xb4) =
         *(int *)(param_1 + 0xb4) + ((short)(&DAT_080ef450)[(byte)(bVar1 + 0x40)] * iVar5 >> 8);
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + ((short)(&DAT_080ef450)[bVar1] * iVar5 >> 8);
  }
  uVar6 = iVar5 + iVar7;
  if (0x80 < uVar6) {
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x80;
    }
  }
  *(uint *)(param_1 + 0x5c) = uVar6;
  return in_lr;
}

