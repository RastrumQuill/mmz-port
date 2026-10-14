// sub_080EC138 at 0x080EC138 (thumb)

undefined4 sub_080EC138(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined4 in_lr;
  
  if ((DAT_02000d14 & 2) == 0) {
    iVar4 = *(int *)(param_1 + 0x75b8);
    uVar1 = *(undefined *)(param_1 + 0xdd8);
    uVar3 = *(undefined *)(param_1 + 0xdd9);
    uVar5 = sub_080D6094(iVar4,uVar1,uVar3);
    uVar6 = uVar5 & 0xff;
    uVar7 = DAT_02000d14 & 1;
    if ((DAT_02000d14 & 1) == 0) {
      uVar3 = sub_080D5DD4(iVar4,uVar1,uVar3);
      uVar5 = sub_080D6094(iVar4,uVar1,uVar3);
      uVar5 = uVar5 & 0xff;
      if (uVar5 == uVar6) {
        cVar2 = sub_080D60CC(uVar5,uVar5);
        if (cVar2 == '\0') {
          sub_080ECC64(iVar4,uVar5);
        }
        else {
          uVar1 = (undefined)uVar7;
          *(undefined *)(param_1 + 2) = uVar1;
          *(undefined *)(param_1 + 3) = uVar1;
          *(ushort *)(param_1 + 4) = uVar7;
          sub_080032EC(1);
        }
      }
      else {
        *(undefined *)(param_1 + 0xdd9) = uVar3;
        sub_080032EC(1);
        sub_080ECC64(iVar4,uVar5);
      }
    }
    else {
      if (((uVar6 - 1 < 0x51) &&
          (((int)(uint)*(byte *)(iVar4 + 0x233 + ((uVar5 << 0x18) >> 0x1b)) >> (uVar5 & 7) & 1U) !=
           0)) && (cVar2 = sub_080D5A34(iVar4,uVar6), cVar2 == '\0')) {
        *(undefined *)(param_1 + 2) = 2;
        *(undefined *)(param_1 + 3) = 0;
        *(undefined2 *)(param_1 + 4) = 0;
        *(char *)(param_1 + 0xdde) = (char)uVar5;
        *(undefined *)(param_1 + 0xddf) = (&DAT_0834a1d4)[uVar6 * 0xc];
        sub_080032EC(2);
        return in_lr;
      }
      sub_080032EC(4);
    }
  }
  else {
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    sub_080032EC(3);
  }
  return in_lr;
}

