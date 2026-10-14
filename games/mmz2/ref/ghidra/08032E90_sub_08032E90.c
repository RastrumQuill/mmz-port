// sub_08032E90 at 0x08032E90 (thumb)

undefined8 sub_08032E90(int param_1,ushort param_2)

{
  ushort uVar1;
  char cVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  cVar2 = *(char *)(param_1 + 0x2e6);
  if ((int)cVar2 * (int)*(short *)(param_1 + 0x2e8) < 1) {
    if ((param_2 & 0x80) == 0) {
      param_2 = param_2 & 0xf;
      if (param_2 == 1) {
        iVar5 = *(int *)(param_1 + 0x10c);
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xfff;
        }
        param_2 = sub_08008354(*(undefined4 *)(param_1 + 0x108),(iVar5 >> 0xc) * 0x1000 + -1);
        param_2 = param_2 & 0xf;
        if (param_2 == 0) goto LAB_08032f0e;
      }
    }
    else {
      param_2 = param_2 & 0xf;
    }
    puVar3 = (ushort *)(&UNK_0833444c + (uint)(0 < cVar2) * 0xe);
    do {
      uVar1 = *puVar3;
      if (param_2 == uVar1) {
        uVar4 = 1;
        goto LAB_08032f1e;
      }
      puVar3 = puVar3 + 1;
    } while (uVar1 != 0);
  }
LAB_08032f0e:
  uVar4 = 0;
LAB_08032f1e:
  return CONCAT44(in_lr,uVar4);
}

