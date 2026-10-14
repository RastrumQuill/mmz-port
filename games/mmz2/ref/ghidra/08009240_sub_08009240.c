// sub_08009240 at 0x08009240 (thumb)

undefined8 sub_08009240(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = 0;
  uVar3 = param_1;
  while( true ) {
    uVar1 = *(ushort *)
             ((uint)(&DAT_020017e0)
                    [(uint)DAT_020017e0 * ((int)param_2 >> 0xc) + ((int)uVar3 >> 0xc) + 2] * 2 +
             DAT_020011b8);
    uVar4 = uVar3;
    if (((uVar1 & 0xf) == 0) || ((uVar1 & 0x8000) != 0)) break;
    if ((uVar1 & 0xf) == 1) {
      uVar4 = uVar3 + 0x1000 & 0xfffff000;
    }
    else {
      iVar2 = sub_080EF11C(param_2 & 0xfff,~uVar3 & 0xfff,
                           *(undefined4 *)(&DAT_08312c4c + (uVar1 & 0xf) * 4));
      if ((iVar2 == 0) || (uVar4 = uVar3 - iVar2, ((uVar3 ^ uVar4) & 0x1000) == 0)) break;
    }
    iVar5 = iVar5 + 1;
    uVar3 = uVar4;
    if (0xf < iVar5) break;
  }
  if (iVar5 < 0x10) {
    iVar5 = sub_0800A25C(uVar4,param_2);
    iVar5 = iVar5 - param_1;
  }
  else {
    iVar5 = -1;
  }
  return CONCAT44(in_lr,iVar5);
}

