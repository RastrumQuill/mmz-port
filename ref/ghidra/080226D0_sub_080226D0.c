// sub_080226D0 at 0x080226D0 (thumb)

undefined4 sub_080226D0(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 in_lr;
  
  cVar1 = sub_0801B968();
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 1;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_08022778(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    puVar2 = (undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xc1) = *puVar2;
    *puVar2 = 0;
    puVar4 = (undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xc2) = *puVar4;
    *puVar4 = 0;
    puVar3 = (undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc3) = *puVar3;
    *puVar3 = 0;
    *(undefined *)(param_1 + 0xc1) = *puVar2;
    *puVar2 = 3;
    *(undefined *)(param_1 + 0xc2) = *puVar4;
    *puVar4 = 2;
    *(undefined *)(param_1 + 0xc3) = *puVar3;
    *puVar3 = 0;
    sub_08022098(param_1);
  }
  return in_lr;
}

