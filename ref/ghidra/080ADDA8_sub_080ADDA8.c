// sub_080ADDA8 at 0x080ADDA8 (thumb)

undefined4 sub_080ADDA8(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  char acStack_20 [12];
  
  sub_080C8D70(acStack_20,&DAT_080c9534,10);
  sub_0809C6C4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,0);
  sub_0809C980(param_1);
  cVar1 = acStack_20[*(byte *)(param_1 + 0x10)];
  *(char *)(param_1 + 0x44) = cVar1;
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x50) = iVar4 + 0x100;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (((int)(uint)(byte)(&DAT_02022ad4)
                        [(int)*(uint *)(&DAT_082b6864 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3]
       >> (*(uint *)(&DAT_082b6864 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7) & 1U) == 0) {
    switch(*(byte *)(param_1 + 0x10)) {
    case 0:
    case 2:
    case 7:
    case 9:
      uVar5 = sub_080A9280(param_1,*(undefined *)(param_1 + 0x10),1);
      break;
    case 1:
    case 4:
    case 5:
      sub_08073AFC(param_1,*(undefined *)(param_1 + 0x10));
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      goto LAB_080adecc;
    case 3:
    case 6:
    case 8:
      uVar5 = sub_080A9C9C(param_1,*(undefined *)(param_1 + 0x10),1);
      break;
    default:
      goto switchD_080ade76_caseD_a;
    }
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    uVar3 = 1;
LAB_080adecc:
    *(undefined *)(param_1 + 0xc4) = uVar3;
switchD_080ade76_caseD_a:
    if ((DAT_02022ada & 0x80) == 0) goto LAB_080adede;
    uVar3 = 5;
  }
  else {
    uVar3 = 3;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
LAB_080adede:
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080ADEF4(param_1);
  return in_lr;
}

