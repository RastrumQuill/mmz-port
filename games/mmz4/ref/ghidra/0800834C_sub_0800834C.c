// sub_0800834C at 0x0800834C (thumb)

undefined8 sub_0800834C(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  uint local_24;
  
  local_24 = param_1;
  if (DAT_02000c80 == 4) {
    iVar2 = sub_08128954(param_1 - 0xf000,0x3c000);
    local_24 = iVar2 + 0xf000;
  }
  iVar2 = 0;
  uVar4 = local_24;
  while( true ) {
    uVar1 = *(ushort *)
             ((uint)(&DAT_02001290)
                    [(uint)DAT_02001290 * ((int)param_2 >> 0xc) + ((int)uVar4 >> 0xc) + 2] * 2 +
             DAT_02000c68);
    uVar5 = uVar4;
    if (((uVar1 & 0xf) == 0) || ((uVar1 & 0x8400) != 0)) break;
    if ((uVar1 & 0xf) == 1) {
      uVar5 = uVar4 + 0x1000 & 0xfffff000;
    }
    else {
      iVar3 = sub_08128888(param_2 & 0xfff,~uVar4 & 0xfff,
                           *(undefined4 *)(&DAT_08827c50 + (uVar1 & 0xf) * 4));
      if ((iVar3 == 0) || (uVar5 = uVar4 - iVar3, ((uVar4 ^ uVar5) & 0x1000) == 0)) break;
    }
    iVar2 = iVar2 + 1;
    uVar4 = uVar5;
    if (0xf < iVar2) break;
  }
  if (iVar2 < 0x10) {
    iVar2 = sub_080095E8(uVar5,param_2);
    iVar2 = iVar2 - local_24;
  }
  else {
    iVar2 = -1;
  }
  return CONCAT44(in_lr,iVar2);
}

