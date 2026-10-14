// sub_080F7708 at 0x080F7708 (thumb)

undefined4 sub_080F7708(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x64ac);
  cVar3 = sub_080F3784(param_1);
  if (cVar3 == '\0') {
    sub_080041E4(0x3e);
    sub_080041E4(0x3f);
    bVar1 = *(byte *)(param_1 + 0xdf4);
    if ((DAT_02002136 & 0x40) != 0) {
      uVar4 = sub_080FE390(bVar1 + 8,0xc);
      *(undefined *)(param_1 + 0xdf4) = uVar4;
    }
    uVar2 = DAT_02002136;
    if ((DAT_02002136 & 0x80) != 0) {
      uVar4 = sub_080FE390(*(byte *)(param_1 + 0xdf4) + 4,0xc);
      *(undefined *)(param_1 + 0xdf4) = uVar4;
    }
    if ((uVar2 & 0x20) != 0) {
      iVar6 = *(byte *)(param_1 + 0xdf4) + 3;
      *(byte *)(param_1 + 0xdf4) =
           (*(byte *)(param_1 + 0xdf4) & 0xfc) + (char)iVar6 + (char)(iVar6 >> 2) * -4;
    }
    if ((DAT_02002136 & 0x10) != 0) {
      iVar6 = *(byte *)(param_1 + 0xdf4) + 1;
      *(byte *)(param_1 + 0xdf4) =
           (*(byte *)(param_1 + 0xdf4) & 0xfc) + (char)iVar6 + (char)(iVar6 >> 2) * -4;
    }
    if ((uint)bVar1 != (uint)*(byte *)(param_1 + 0xdf4)) {
      sub_0800471C(1);
    }
    if ((DAT_02002134 & 1) != 0) {
      uVar8 = (uint)*(byte *)(param_1 + 0xdf4);
      uVar7 = 1 << uVar8;
      if ((int)(*(ushort *)(iVar5 + 200) & uVar7) >> uVar8 == 0) {
        sub_0800471C(4);
      }
      else {
        uVar2 = *(ushort *)(iVar5 + 0xc6);
        if ((int)(uVar2 & uVar7) >> uVar8 == 0) {
          *(ushort *)(iVar5 + 0xc6) = uVar2 | (ushort)uVar7;
          sub_0800471C(2);
        }
        else {
          *(ushort *)(iVar5 + 0xc6) = uVar2 ^ (ushort)uVar7;
          sub_0800471C(3);
        }
      }
    }
    *(ushort *)(*(int *)(param_1 + 0xdf0) + 0x74) = (*(byte *)(param_1 + 0xdf4) & 3) * 0x18 + 0x11c;
    *(ushort *)(*(int *)(param_1 + 0xdf0) + 0x76) =
         (ushort)(*(byte *)(param_1 + 0xdf4) >> 2) * 0x18 + 0x28;
    uVar7 = (uint)*(byte *)(param_1 + 0xdf4);
    if ((int)((uint)*(ushort *)(iVar5 + 200) & 1 << uVar7) >> uVar7 == 0) {
      sub_080E9604(&DAT_08370f5e,2,0xe);
      sub_080E9604(&DAT_083711e8,0x11,1);
    }
    else {
      sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[uVar7 + 0x1c2],2,0xe);
      sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[*(byte *)(param_1 + 0xdf4) + 0x1cf],0x11,
                   1);
    }
  }
  return in_lr;
}

