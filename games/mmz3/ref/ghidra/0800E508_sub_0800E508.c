// sub_0800E508 at 0x0800E508 (thumb)

undefined4 sub_0800E508(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *param_1 + -0x1000 >> 0xc;
  iVar5 = param_1[1] >> 0xc;
  uVar2 = 0;
  while( true ) {
    iVar3 = (int)(uVar2 * 0x10000) >> 0x10;
    if ((iVar4 == (&DAT_0833a820)[iVar3 * 2]) && (iVar5 == (&DAT_0833a824)[iVar3 * 2])) break;
    uVar1 = uVar2 * 0x10000 + 0x10000;
    uVar2 = uVar1 >> 0x10;
    if (0xb < (int)uVar1 >> 0x10) {
      sub_08009348(iVar4,iVar5,&DAT_0833a812);
      return in_lr;
    }
  }
  sub_08009348(iVar4,iVar5,&DAT_0833a880 + iVar3 * 0xc);
  return in_lr;
}

