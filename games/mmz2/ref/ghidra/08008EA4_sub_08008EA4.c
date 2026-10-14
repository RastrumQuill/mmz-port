// sub_08008EA4 at 0x08008EA4 (thumb)

undefined8 sub_08008EA4(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0;
  uVar4 = param_2;
  do {
    uVar1 = *(ushort *)
             ((uint)(&DAT_020017e0)
                    [(uint)DAT_020017e0 * ((int)uVar4 >> 0xc) + ((int)param_1 >> 0xc) + 2] * 2 +
             DAT_020011b8);
    uVar3 = uVar1 & 0xf;
    uVar5 = uVar4;
    if (((uVar1 & 0xf) == 0) || (uVar1 == 0x800f)) {
LAB_08008f2e:
      iVar6 = uVar5 - param_2;
      goto LAB_08008f44;
    }
    if (uVar3 == 1) {
      uVar5 = (uVar4 & 0xfffff000) - 1;
    }
    else {
      iVar2 = sub_080EF120(param_1 & 0xfff,uVar4 & 0xfff,0xfff,
                           *(undefined4 *)(&DAT_08312b8c + uVar3 * 4));
      if ((iVar2 == 0) || (uVar5 = uVar4 + iVar2, ((uVar4 ^ uVar5) & 0x1000) == 0))
      goto LAB_08008f2e;
    }
    iVar6 = iVar6 + 1;
    uVar4 = uVar5;
  } while (iVar6 < 0x10);
  iVar6 = 1;
LAB_08008f44:
  return CONCAT44(in_lr,iVar6);
}

