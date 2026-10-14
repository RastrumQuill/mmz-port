// sub_0802BDDC at 0x0802BDDC (thumb)

undefined4 sub_0802BDDC(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  cVar1 = sub_08036FD0(param_1);
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 1;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_0802BEF4(param_1);
  }
  else {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    puVar5 = (undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x17a) = *puVar5;
    *puVar5 = 0;
    puVar4 = (undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x17b) = *puVar4;
    *puVar4 = 0;
    puVar3 = (undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x17c) = *puVar3;
    *puVar3 = 0;
    puVar2 = (undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x17d) = *puVar2;
    *puVar2 = 0;
    *(undefined *)(param_1 + 0x17a) = *puVar5;
    *puVar5 = 3;
    *(undefined *)(param_1 + 0x17b) = *puVar4;
    *puVar4 = 2;
    *(undefined *)(param_1 + 0x17c) = *puVar3;
    *puVar3 = 1;
    *(undefined *)(param_1 + 0x17d) = *puVar2;
    *puVar2 = 0;
    sub_0802B59C(param_1);
  }
  return in_lr;
}

