// sub_08037EC8 at 0x08037EC8 (thumb)

undefined8 sub_08037EC8(int param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (param_2 == 3) {
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    iVar4 = *(int *)(param_1 + 0x58);
  }
  else {
    uVar5 = sub_080378D8(param_1,param_2 & 0xff);
    iVar4 = sub_0803792C(param_1,param_2 & 0xff);
  }
  iVar2 = *(int *)(param_1 + 0x58);
  cVar1 = sub_080083A0(uVar5,iVar4);
  if (cVar1 == '\0') {
    iVar3 = sub_0801F2E8(param_1 + 0x54,(undefined4 *)(param_1 + 0xd8),
                         *(undefined4 *)(param_1 + 0xd8),*(byte *)(param_1 + 10) >> 4 & 1,0);
    iVar3 = iVar3 - (*(int *)(param_1 + 0x58) - iVar4);
    if (iVar3 < 1) {
      uVar5 = 0;
      goto LAB_08037f6a;
    }
    if (param_3 != 0) {
      iVar3 = *(int *)(param_1 + 0x58) - iVar3;
      goto LAB_08037f5e;
    }
  }
  else if (param_3 != 0) {
    iVar3 = sub_080EF150(iVar4,0xa000);
    iVar3 = iVar3 * 0xa000 + -1;
LAB_08037f5e:
    *(int *)(param_1 + 0x58) = iVar3 + (iVar2 - iVar4);
  }
  uVar5 = 1;
LAB_08037f6a:
  return CONCAT44(in_lr,uVar5);
}

