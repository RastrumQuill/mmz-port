// sub_080398D8 at 0x080398D8 (thumb)

undefined4 sub_080398D8(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  byte bVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar10 = *(int *)(param_1 + 0xb4);
  if (*(char *)(iVar10 + 0x126) == -1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar6 = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 0xc);
    goto LAB_08039b9c;
  }
  if ((*(char *)(param_1 + 0xbc) != '\0') && ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0)) {
    sub_0800471C(0x2b);
    *(undefined *)(param_1 + 0xbc) = 0;
  }
  pcVar9 = (char *)(param_1 + 0x71);
  if ((*(char *)(param_1 + 0xba) != '\0') && ('\x01' < *pcVar9)) {
    if (((*(char *)(iVar10 + 0xc0) == '\x02') || (*(char *)(iVar10 + 0xc1) == '\x02')) &&
       (*(char *)(param_1 + 0xb8) == *(char *)(iVar10 + 0xc2))) {
      if (*(char *)(param_1 + 0xba) == '\x01') {
        sub_0803B314(iVar10,0,1);
        sub_0803B314(iVar10,1,1);
        sub_0803B314(iVar10,2,1);
        sub_0803B314(iVar10,3,1);
      }
      else {
        sub_0803B314(iVar10,0,0);
        sub_0803B314(iVar10,1,0);
        sub_0803B314(iVar10,2,0);
        sub_0803B314(iVar10,3,0);
      }
    }
    *(undefined *)(param_1 + 0xba) = 0;
  }
  if ((*(char *)(param_1 + 0x10) == '\r') && (*pcVar9 == '\x02')) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar5 = sub_08009A3C(*(int *)(param_1 + 0x54) + -0x200,*(int *)(param_1 + 0x58) + 0x800);
      if (sVar5 == 0) {
        iVar7 = *(int *)(param_1 + 0x54) + 0x900;
        goto LAB_08039a3c;
      }
    }
    else {
      sVar5 = sub_08009A3C(*(int *)(param_1 + 0x54) + 0x200,*(int *)(param_1 + 0x58) + 0x800);
      if (sVar5 == 0) {
        iVar7 = *(int *)(param_1 + 0x54) + -0x900;
LAB_08039a3c:
        sVar5 = sub_08009A3C(iVar7,*(int *)(param_1 + 0x58) + 0x800);
        if (sVar5 == 0) goto LAB_08039a5a;
      }
    }
    *(undefined *)(param_1 + 0x10) = 0x13;
    *(undefined *)(iVar10 + 0x135) = 1;
  }
LAB_08039a5a:
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar10 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar10 + 0x58);
  if (*(char *)(param_1 + 0x10) != *(char *)(iVar10 + 0x126)) {
    *(char *)(param_1 + 0x10) = *(char *)(iVar10 + 0x126);
    sub_080177CC(param_1,*(undefined2 *)(&DAT_0835cbf8 + (uint)*(byte *)(param_1 + 0x10) * 2),
                 (short)*pcVar9,(short)*(char *)(param_1 + 0x72));
  }
  bVar4 = *(byte *)(iVar10 + 10) >> 4;
  uVar8 = bVar4 & 1;
  if ((bVar4 & 1) == 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(char *)(param_1 + 0x4c) = (char)uVar8;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x10) == '\x15') {
    uVar6 = *(undefined4 *)
             (*pcVar9 * 4 + *(int *)(&DAT_0835d9bc + (uint)*(byte *)(param_1 + 0x10) * 4));
    uVar1 = *(undefined *)(param_1 + 0xb9);
    uVar2 = *(undefined *)(param_1 + 0xb8);
    uVar3 = (&DAT_0835da28)[*pcVar9];
LAB_08039b4c:
    sub_080073A0(param_1 + 0x74,uVar6,uVar1,uVar2,0xffffffff,uVar3);
  }
  else {
    if (*(char *)(param_1 + 0xbb) != '\0') {
      uVar6 = *(undefined4 *)
               (*pcVar9 * 4 + *(int *)(&DAT_0835d9bc + (uint)*(byte *)(param_1 + 0x10) * 4));
      uVar1 = *(undefined *)(param_1 + 0xb9);
      uVar2 = *(undefined *)(param_1 + 0xb8);
      uVar3 = *(undefined *)(param_1 + 0xbb);
      goto LAB_08039b4c;
    }
    sub_080073A0(param_1 + 0x74,
                 *(undefined4 *)
                  (*pcVar9 * 4 + *(int *)(&DAT_0835d9bc + (uint)*(byte *)(param_1 + 0x10) * 4)),
                 *(undefined *)(param_1 + 0xb9),*(undefined *)(param_1 + 0xb8),0xffffffff,0xffffffff
                );
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar6 = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
LAB_08039b9c:
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  return in_lr;
}

