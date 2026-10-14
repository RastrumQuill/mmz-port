// sub_080944CC at 0x080944CC (thumb)

undefined4 sub_080944CC(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\x03') && ((DAT_0202ebbd & 0x20) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = (&DAT_08342c04)[*(byte *)(param_1 + 0x10)];
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_08006DE4(param_1 + 0x74,&DAT_08342b10,param_1 + 0x54,2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80948ed;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
    if (*(char *)(param_1 + 0x10) != '\x04') {
      sub_08012580(param_1);
      bVar1 = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(bool *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_080127E4(param_1,*(undefined2 *)(&DAT_08342c0a + (uint)*(byte *)(param_1 + 0x10) * 2));
    }
    if ((*(char *)(param_1 + 0x10) == '\x01') && (iVar3 = sub_08006B84(DAT_0202f078), iVar3 != 0)) {
      *(undefined *)(iVar3 + 0x25) = 0x18;
      *(undefined *)(iVar3 + 9) = 0x52;
      *(undefined4 *)(iVar3 + 0x14) = 0x80944cd;
      *(undefined2 *)(iVar3 + 0x20) = 0;
      *(undefined *)(iVar3 + 0x22) = 0;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
      *(undefined *)(iVar3 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
      *(undefined *)(iVar3 + 0x10) = 4;
      *(int *)(iVar3 + 0x28) = param_1;
    }
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x03')) {
      uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
    }
    iVar3 = sub_08065A24(param_1);
    if (iVar3 != 0) {
      sub_080EF118(param_1,*(undefined4 *)(&DAT_08342ba0 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080EF118(param_1,*(undefined4 *)(&DAT_08342bd0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    sub_08002638(&DAT_084338e0,(DAT_0202e6c0 - 0x200) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084338ec,(DAT_0202e4c0 - 4) * 0x20 + 0x200);
    sub_080946E0(param_1);
  }
  return in_lr;
}

