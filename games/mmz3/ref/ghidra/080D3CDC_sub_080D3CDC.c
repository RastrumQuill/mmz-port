// sub_080D3CDC at 0x080D3CDC (thumb)

undefined4 sub_080D3CDC(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar5 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    sub_08017700(param_1,0xc20d);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    uVar5 = 0xc20c;
    break;
  case 2:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    uVar5 = 0xc201;
    break;
  case 3:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    goto LAB_080d3dea;
  case 4:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xc206);
    goto LAB_080d3df8;
  case 5:
    sub_080177F4(param_1);
    bVar4 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar3 = 2;
    goto LAB_080d3de4;
  case 6:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xc201);
    goto LAB_080d3df8;
  case 7:
    sub_080177F4(param_1);
    bVar4 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar3 = 4;
LAB_080d3de4:
    if ((bVar3 & bVar4) == 0) {
      return in_lr;
    }
LAB_080d3dea:
    uVar5 = 0xc200;
    break;
  case 8:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xc206);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 9:
    sub_080177F4(param_1);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x54);
    if (bVar1) {
      bVar4 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar4;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  default:
    goto switchD_080d3cf0_caseD_a;
  }
  sub_08017700(param_1,uVar5);
  *(undefined *)(param_1 + 0x12) = 6;
LAB_080d3df8:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d3cf0_caseD_a:
  return in_lr;
}

