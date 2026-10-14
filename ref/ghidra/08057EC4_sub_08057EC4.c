// sub_08057EC4 at 0x08057EC4 (thumb)

undefined4 sub_08057EC4(int param_1)

{
  undefined uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = DAT_02022adc & 1;
  if ((DAT_02022adc & 1) == 0) {
    sub_08048A54(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(uint *)(param_1 + 0x68) = uVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_080033F0(param_1 + 0x6c,7);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082afb68,param_1 + 0x4c,4);
    *(int *)(param_1 + 0xb4) = param_1;
    *(uint *)(param_1 + 0xb0) = uVar2;
    *(uint *)(param_1 + 0x58) = uVar2;
    *(uint *)(param_1 + 0x54) = uVar2;
    uVar1 = (undefined)uVar2;
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(undefined *)(param_1 + 0x1f) = uVar1;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x24) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_08057FAC(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

