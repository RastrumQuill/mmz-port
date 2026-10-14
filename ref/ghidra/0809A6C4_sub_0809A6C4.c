// sub_0809A6C4 at 0x0809A6C4 (thumb)

undefined4 sub_0809A6C4(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar3 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar3;
  local_1c = DAT_02022c7c + -0x7800;
  local_18 = DAT_02022c80 + -0x5000;
  switch(bVar3 & 7) {
  case 0:
  case 4:
    uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = uVar1 & 0x7fffffff;
    DAT_02022890 = uVar4;
    iVar2 = sub_080C8CB0(uVar1 * 2 >> 0x11,0x78);
    local_1c = iVar2 * 0x100 + local_1c;
    uVar1 = uVar4 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar1 & 0x7fffffff;
    iVar2 = sub_080C8CB0(uVar1 * 2 >> 0x11,0x50);
    local_18 = iVar2 * 0x100 + local_18;
    goto LAB_0809a812;
  case 1:
  case 5:
    uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = uVar1 & 0x7fffffff;
    DAT_02022890 = uVar4;
    iVar2 = sub_080C8CB0(uVar1 * 2 >> 0x11,0x78);
    local_1c = local_1c + (iVar2 + 0x78) * 0x100;
    uVar1 = uVar4 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar1 & 0x7fffffff;
    iVar2 = sub_080C8CB0(uVar1 * 2 >> 0x11,0x50);
    iVar2 = iVar2 + 0x50;
    break;
  case 2:
  case 6:
    uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = uVar1 & 0x7fffffff;
    DAT_02022890 = uVar4;
    iVar2 = sub_080C8CB0(uVar1 * 2 >> 0x11,0x78);
    local_1c = local_1c + (iVar2 + 0x78) * 0x100;
    uVar1 = uVar4 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar1 & 0x7fffffff;
    iVar2 = sub_080C8CB0(uVar1 * 2 >> 0x11,0x50);
    break;
  case 3:
  case 7:
    uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = uVar1 & 0x7fffffff;
    DAT_02022890 = uVar4;
    iVar2 = sub_080C8CB0(uVar1 * 2 >> 0x11,0x78);
    local_1c = local_1c + iVar2 * 0x100;
    uVar1 = uVar4 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar1 & 0x7fffffff;
    iVar2 = sub_080C8CB0(uVar1 * 2 >> 0x11,0x50);
    local_18 = local_18 + (iVar2 + 0x50) * 0x100;
    sub_0808827C(1,&local_1c);
  default:
    goto switchD_0809a6f6_caseD_8;
  }
  local_18 = local_18 + iVar2 * 0x100;
LAB_0809a812:
  sub_0808827C(1,&local_1c);
switchD_0809a6f6_caseD_8:
  return in_lr;
}

