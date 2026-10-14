// sub_0801480C at 0x0801480C (thumb)

undefined4 sub_0801480C(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  uint local_1c;
  undefined4 local_18;
  
  iVar1 = param_1 >> 0xc;
  iVar4 = param_2 + 0x64000 >> 0xc;
  local_1c = iVar1 + 0x5aU & 0xffff | iVar4 << 0x10;
  local_18 = 0x10001;
  DAT_0202db00 = (&DAT_02001290)[iVar4 * (uint)DAT_02001290 + iVar1 + 2];
  if ((1 < (ushort)(DAT_0202db00 - 0xd7)) && (DAT_0202db00 != 0)) {
    if ((DAT_0202db00 & 1) == 0) {
      iVar3 = param_1 + -0x1000 >> 0xc;
      DAT_0202db00 = (&DAT_02001290)[iVar4 * (uint)DAT_02001290 + iVar3 + 2];
      uVar2 = (uint)DAT_0202db00;
      if (uVar2 != 0) {
        if (uVar2 < 0xb0) {
          sub_08007410(iVar3,iVar4,&UNK_08830c98 + uVar2 * 8);
        }
        else {
          sub_08007410(iVar3,iVar4,&UNK_08830c38 + uVar2 * 8);
        }
      }
      sub_0800736C(iVar1,param_2 >> 0xc,&local_1c);
    }
    else {
      iVar3 = param_1 + 0x1000 >> 0xc;
      DAT_0202db00 = (&DAT_02001290)[iVar4 * (uint)DAT_02001290 + iVar3 + 2];
      uVar2 = (uint)DAT_0202db00;
      if (uVar2 != 0) {
        if (uVar2 < 0xb0) {
          sub_08007410(iVar3,iVar4,&UNK_08830c98 + uVar2 * 8);
        }
        else {
          sub_08007410(iVar3,iVar4,&UNK_08830c38 + uVar2 * 8);
        }
      }
      sub_0800736C(iVar1,param_2 >> 0xc,&local_1c);
    }
  }
  sub_08007410(iVar1,param_2 + 0x64000 >> 0xc,&DAT_088311d8);
  DAT_0202dad9 = 1;
  return in_lr;
}

