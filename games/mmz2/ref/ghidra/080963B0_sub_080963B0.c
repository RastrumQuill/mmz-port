// sub_080963B0 at 0x080963B0 (thumb)

undefined4 sub_080963B0(int param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  puVar4 = (ushort *)(param_1 + 0xba);
  uVar1 = *puVar4;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    goto LAB_0809643c;
  }
  *puVar4 = uVar1 - 1;
  if ((ushort)(uVar1 - 1) < 0x3c) {
    if ((*puVar4 & 1) == 0) {
LAB_08096410:
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
LAB_08096416:
    *(byte *)(param_1 + 10) = bVar2;
  }
  else if ((ushort)(uVar1 - 1) < 0xb4) {
    if ((*puVar4 & 3) == 0) goto LAB_08096410;
    bVar2 = *(byte *)(param_1 + 10) | 1;
    goto LAB_08096416;
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
      iVar3 = sub_0801E11C(0,param_1,&DAT_08342d40);
      *(int *)(param_1 + 0x2c) = iVar3;
      if (iVar3 != 0) {
        *(undefined *)(param_1 + 0xd) = 5;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08342d1c + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  *(undefined *)(param_1 + 0xd) = 0;
LAB_0809643c:
  sub_0809648C(param_1);
  return in_lr;
}

