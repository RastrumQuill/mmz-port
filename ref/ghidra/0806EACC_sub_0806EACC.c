// sub_0806EACC at 0x0806EACC (thumb)

undefined4 sub_0806EACC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08048A54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b10a4,param_1 + 0x4c,0x100);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x806f51d;
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x1f) = 0xc0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x80;
  uVar1 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0806E6C0(param_1);
  return in_lr;
}

