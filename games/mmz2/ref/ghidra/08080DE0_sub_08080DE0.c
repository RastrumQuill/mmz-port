// sub_08080DE0 at 0x08080DE0 (thumb)

undefined4 sub_08080DE0(int param_1)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_08340c54);
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08340cb4 + (uint)*(byte *)(param_1 + 0x11) * 4));
    uVar4 = sub_08038E6C(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
    uVar9 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar9 & 0x7fffffff;
    uVar4 = (uVar4 & 0xff) + (uVar9 * 2 >> 0x11 & 0x1f) + 0xf1;
    uVar9 = uVar4 & 0xff;
    *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[uVar9 + 0x40 & 0xff];
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[uVar9];
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xb6) = 0;
    *(char *)(param_1 + 0xb7) = (char)uVar4;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0x140;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pbVar10 = (byte *)(param_1 + 0xb6);
  *pbVar10 = *pbVar10 + 2;
  iVar5 = *(int *)(param_1 + 0xb8) + 0x100;
  *(int *)(param_1 + 0xb8) = iVar5;
  sVar2 = (&DAT_080ef450)[*pbVar10];
  uVar4 = (uint)*(byte *)(param_1 + 0xb7);
  iVar6 = iVar5 * (short)(&DAT_080ef450)[uVar4];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar7 = sVar2 * 0x18 * (int)(short)(&DAT_080ef450)[uVar4 + 0x40 & 0xff];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + (iVar6 >> 8) + (iVar7 >> 8);
  uVar4 = (uint)*(byte *)(param_1 + 0xb7);
  iVar5 = iVar5 * (short)(&DAT_080ef450)[uVar4 + 0x40 & 0xff];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar6 = sVar2 * 0x18 * (int)(short)(&DAT_080ef450)[uVar4];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  *(int *)(param_1 + 0x54) = (*(int *)(param_1 + 100) + (iVar5 >> 8)) - (iVar6 >> 8);
  uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (0x4000 < uVar4) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
LAB_08080fa0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  uVar1 = *(ushort *)(param_1 + 0xbc);
  uVar8 = uVar1 - 1;
  *(ushort *)(param_1 + 0xbc) = uVar8;
  if (uVar1 == 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    goto LAB_08080fa0;
  }
  if ((ushort)(uVar1 - 1) < 0x40) {
    if ((uVar8 & 1) != 0) {
      bVar3 = *(byte *)(param_1 + 10) | 1;
      goto LAB_08080ff2;
    }
  }
  else {
    if (0x7f < (ushort)(uVar1 - 1)) {
      return in_lr;
    }
    if ((uVar8 & 3) != 0) {
      bVar3 = *(byte *)(param_1 + 10) | 1;
      goto LAB_08080ff2;
    }
  }
  bVar3 = *(byte *)(param_1 + 10) & 0xfe;
LAB_08080ff2:
  *(byte *)(param_1 + 10) = bVar3;
  return in_lr;
}

