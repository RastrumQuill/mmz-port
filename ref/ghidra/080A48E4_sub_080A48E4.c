// sub_080A48E4 at 0x080A48E4 (thumb)

undefined4 sub_080A48E4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  char acStack_18 [8];
  
  sub_080C8DD0(acStack_18,0,8);
  acStack_18[2] = 1;
  uVar4 = *(byte *)(param_1 + 0x10) + 0x21;
  if (((int)(uint)(byte)(&DAT_02022ad4)[(int)uVar4 >> 3] >> (uVar4 & 7) & 1U) == 0) {
    sub_0809C6C4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_0809C930(param_1,3);
    sub_0809C980(param_1);
    cVar2 = acStack_18[*(byte *)(param_1 + 0x10)];
    *(char *)(param_1 + 0x44) = cVar2;
    if (cVar2 == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b5e4c,param_1 + 0x4c,8);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    uVar4 = *(byte *)(param_1 + 0x10) + 0x19;
    if (((int)(uint)(byte)(&DAT_02022ad4)[(int)uVar4 >> 3] >> (uVar4 & 7) & 1U) != 0) {
      *(undefined *)(param_1 + 0xd) = 3;
      cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800);
      if (cVar2 != '\0') {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar3 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800);
          iVar3 = iVar3 + 0x800;
        }
        else {
          iVar3 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800);
          iVar3 = iVar3 + -0x800;
        }
        *(int *)(param_1 + 0x4c) = iVar3;
      }
      iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      *(int *)(param_1 + 0x50) = iVar3 + -0x800;
      sub_0800561C(param_1 + 0x74,&DAT_082b5e68);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

