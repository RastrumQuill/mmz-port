// sub_080301E4 at 0x080301E4 (thumb)

undefined4 sub_080301E4(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  sub_08029654();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,1);
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  pcVar2 = (char *)(param_1 + 0xd9);
  *pcVar2 = '@';
  sub_08029874(param_1,&DAT_082ad390,*pcVar2);
  *(char *)(param_1 + 0xd8) = *pcVar2 + -0xc;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xc2) = 0x200;
  *(undefined *)(param_1 + 200) = 0;
  *(undefined *)(param_1 + 0xc9) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  sub_080014E8(&DAT_084b82bc,(DAT_02022ee6 - 0x300) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084b82c8,(DAT_02022f53 - 5) * 0x20 + 0x200);
  sub_080014E8(&DAT_085002e4,(DAT_0202305a - 0x340) * 0x20 + 0x10000);
  sub_0800179C(&DAT_085002f0,(DAT_020230e5 - 6) * 0x20 + 0x200);
  uVar1 = sub_08060E44(param_1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080301B0(param_1);
  return in_lr;
}

