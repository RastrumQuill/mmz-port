// sub_08088BA4 at 0x08088BA4 (thumb)

undefined4 sub_08088BA4(int param_1)

{
  char cVar1;
  undefined uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x03')) {
    uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x8000 < uVar4) goto LAB_08088c0c;
    cVar1 = sub_08088914(param_1);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 2;
      goto LAB_08088d40;
    }
  }
  if (*(char *)(param_1 + 0x10) == '\x04') {
    if (2 < *(byte *)(iVar8 + 0xc)) {
LAB_08088c0c:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    if (1 < *(byte *)(iVar8 + 0xc)) {
      sub_0808896C(iVar8);
      goto LAB_08088c0c;
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
      sub_0808896C(iVar8);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      uVar6 = *(undefined4 *)(iVar8 + 0x54);
      uVar7 = *(undefined4 *)(iVar8 + 0x58);
      uVar4 = sub_080887E0(iVar8,0,1);
      uVar5 = sub_080887E0(iVar8,0,0xffffffff);
      *(undefined4 *)(iVar8 + 0x54) = uVar6;
      *(undefined4 *)(iVar8 + 0x58) = uVar7;
      if (((uVar4 & 0xff | uVar5 & 0xff) & 1) != 0) {
        *(undefined4 *)(iVar8 + 0xc) = 2;
        *(undefined4 *)(iVar8 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar8 + 9) * 4) + 8);
        sub_08088E1C(iVar8);
        return in_lr;
      }
      sub_08017700(iVar8,0xdd07);
      sub_080177F4(iVar8);
      *(undefined *)(iVar8 + 0xd) = 8;
      *(undefined *)(iVar8 + 0xe) = 0;
      return in_lr;
    }
  }
  else if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if (((*(uint *)(param_1 + 0x8c) & 0x20000) == 0) || (*(char *)(param_1 + 0x10) == '\x02')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
LAB_08088d40:
    sub_08088E1C(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) != '\f') {
    if (*(char *)(param_1 + 0xf) == '\0') {
      iVar8 = sub_08063614(param_1);
      if (iVar8 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      if (*(char *)(param_1 + 0xf) == '\0') goto LAB_08088de4;
    }
    cVar1 = *(char *)(param_1 + 0x10);
    if ((cVar1 == '\0') || (cVar1 == '\x03')) {
      iVar8 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
      if (iVar8 != 0) {
        sub_080887E0(param_1,iVar8,0);
      }
      sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
      if (sVar3 != 0) {
        uVar6 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar6;
      }
    }
    else if (cVar1 == '\x02') {
      sub_08088864(param_1,0,0);
    }
    if (*(char *)(param_1 + 0xf) == '\x01') {
      sub_080177F4(param_1);
      *(undefined *)(param_1 + 0xf) = 2;
    }
    iVar8 = sub_08063614(param_1);
    if (iVar8 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x20001) != 0x20001) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\x02') {
      return in_lr;
    }
  }
LAB_08088de4:
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836509c + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083650d0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

