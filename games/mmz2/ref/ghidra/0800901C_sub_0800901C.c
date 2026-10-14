// sub_0800901C at 0x0800901C (thumb)

undefined8 sub_0800901C(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = 0;
  uVar3 = param_2;
  do {
    uVar1 = *(ushort *)
             ((uint)(&DAT_020017e0)
                    [(uint)DAT_020017e0 * ((int)uVar3 >> 0xc) + ((int)param_1 >> 0xc) + 2] * 2 +
             DAT_020011b8);
    uVar4 = uVar3;
    if (((uVar1 & 0xf) == 0) || ((uVar1 & 0x8000) != 0)) {
LAB_080090ae:
      iVar5 = uVar4 - param_2;
      goto LAB_080090c6;
    }
    if ((uVar1 & 0xf) == 1) {
      uVar4 = uVar3 + 0x1000 & 0xfffff000;
    }
    else {
      iVar2 = sub_080EF120(param_1 & 0xfff,~uVar3 & 0xfff,0xfff,
                           *(undefined4 *)(&DAT_08312bcc + (uVar1 & 0xf) * 4));
      if ((iVar2 == 0) || (uVar4 = uVar3 - iVar2, ((uVar3 ^ uVar4) & 0x1000) == 0))
      goto LAB_080090ae;
    }
    iVar5 = iVar5 + 1;
    uVar3 = uVar4;
  } while (iVar5 < 0x10);
  iVar5 = -1;
LAB_080090c6:
  return CONCAT44(in_lr,iVar5);
}

