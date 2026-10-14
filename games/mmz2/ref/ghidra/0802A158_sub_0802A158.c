// sub_0802A158 at 0x0802A158 (thumb)

undefined4 sub_0802A158(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 4;
    puVar1 = (undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x17a) = *puVar1;
    *puVar1 = 0;
    puVar6 = (undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x17b) = *puVar6;
    *puVar6 = 0;
    puVar4 = (undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x17c) = *puVar4;
    *puVar4 = 0;
    puVar2 = (undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x17d) = *puVar2;
    *puVar2 = 0;
    *(undefined *)(param_1 + 0x17a) = *puVar1;
    *puVar1 = 3;
    *(undefined *)(param_1 + 0x17b) = *puVar6;
    *puVar6 = 1;
    *(undefined *)(param_1 + 0x17c) = *puVar4;
    *puVar4 = 2;
    *(undefined *)(param_1 + 0x17d) = *puVar2;
    *puVar2 = 3;
    iVar5 = -1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar5 = 1;
    }
    if (*(char *)(param_1 + 0x2b8) == '\x02') {
      *(int *)(param_1 + 0x5c) = iVar5 * 0x2a8;
      uVar3 = 0xfffffac0;
    }
    else {
      *(int *)(param_1 + 0x5c) = iVar5 * 600;
      uVar3 = 0xfffffb80;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    sub_0801E9FC(param_1,0x31);
    sub_0802A274(param_1);
  }
  return in_lr;
}

