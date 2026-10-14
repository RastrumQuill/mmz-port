// sub_080222A8 at 0x080222A8 (thumb)

undefined4 sub_080222A8(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_0801B748();
  iVar2 = sub_080262DC(param_1,1,uVar1);
  if (iVar2 == 0) {
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 1;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 1;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_08018C20(param_1,0x27,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    *(undefined *)(param_1 + 0x121) = 2;
    sub_08022338(param_1);
  }
  return in_lr;
}

