// sub_080B498C at 0x080B498C (thumb)

undefined4 sub_080B498C(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 in_lr;
  
  uVar1 = sub_080B45B4(param_1,0,3);
  puVar2 = (undefined2 *)
           (*(int *)(&DAT_082b79e4 + ((param_2 << 0x18) >> 0x16)) +
           ((int)-(uVar1 & 0xff) >> 0x1f) * -0x28);
  puVar4 = (undefined2 *)(param_3 + 0x42);
  iVar3 = 10;
  do {
    *puVar4 = *puVar2;
    puVar4[1] = puVar2[1];
    puVar2 = puVar2 + 2;
    puVar4 = puVar4 + 0x20;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return in_lr;
}

