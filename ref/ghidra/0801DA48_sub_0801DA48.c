// sub_0801DA48 at 0x0801DA48 (thumb)

undefined4 sub_0801DA48(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = (uint)*(byte *)(param_1 + 0x11c);
  *(byte *)(param_1 + 0x11d) = *(byte *)(param_1 + 0x11c);
  sub_0801B29C(param_1);
  *(char *)(param_1 + 0x114) = (char)*(undefined2 *)(param_1 + 0x8c);
  sub_0801B598(param_1);
  sub_08018CA0(param_1);
  sub_0801BCCC(param_1,*(undefined4 *)(param_1 + 0x108));
  uVar5 = (uint)*(byte *)(param_1 + 0xd);
  if (uVar5 < 6) {
    cVar1 = sub_08018E28(param_1);
    if (cVar1 == '\0') {
      uVar5 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9944 + uVar5 * 4));
      uVar5 = uVar5 & 0xff;
    }
    else {
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xbe) = 0;
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 0;
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 0;
      uVar5 = 6;
    }
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x50);
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a995c + uVar5 * 4));
  if (*(byte *)(param_1 + 0xd) < 5) {
    sub_080C8A98(param_1,*(undefined4 *)(&UNK_082a9990 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  sub_08017324(param_1);
  sub_080172F8(param_1);
  sub_08018C64(param_1);
  sub_0801C70C(param_1);
  sub_08018DF0(param_1);
  sub_0801B648(param_1);
  *(undefined *)(param_1 + 299) = 0;
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x50);
  if (((*(byte *)(param_1 + 0x17a) & 1) == 0) || ((DAT_02022b62 & 0x8000) != 0)) {
    iVar3 = -0x200;
  }
  else {
    iVar3 = -0x280;
  }
  if (*(int *)(param_1 + 0x54) < iVar3) {
LAB_0801dbd4:
    if (*(int *)(param_1 + 0xfc) == 0) {
      iVar3 = sub_0808F900(param_1);
      *(int *)(param_1 + 0xfc) = iVar3;
    }
  }
  else {
    if (((*(byte *)(param_1 + 0x17a) & 1) == 0) || ((DAT_02022b62 & 0x8000) != 0)) {
      if (0x200 < *(int *)(param_1 + 0x54)) goto LAB_0801dbd4;
    }
    else if (0x280 < *(int *)(param_1 + 0x54)) goto LAB_0801dbd4;
    iVar3 = *(int *)(param_1 + 0xfc);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 0x11) = 1;
      *(int *)(param_1 + 0xfc) = 0;
    }
  }
  bVar2 = sub_0801C1E8(param_1,*(undefined4 *)(param_1 + 0x108));
  *(byte *)(param_1 + 0x11c) = bVar2;
  uVar5 = (uint)bVar2;
  if (uVar5 != uVar6) {
    if ((uVar5 - 0xb < 0x50) || (uVar6 - 0xb < 0x50)) {
      if (uVar6 - 0xb < 0x50) {
        if (0x4f < uVar5 - 0xb) {
          sub_0809C5DC(*(undefined4 *)(param_1 + 0x100));
        }
      }
      else {
        uVar4 = sub_0809C584(param_1,0,0xffffff00);
        *(undefined4 *)(param_1 + 0x100) = uVar4;
        if (uVar6 < uVar5) {
          sub_0809C584(param_1,1,0xffffff00);
        }
        else {
          sub_0809C584(param_1,2,0xffffff00);
        }
        sub_08001EAC(0xba);
      }
    }
    else {
      sub_0809C5DC(*(undefined4 *)(param_1 + 0x100));
    }
  }
  return in_lr;
}

